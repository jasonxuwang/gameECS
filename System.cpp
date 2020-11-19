#include "System.h"


//更新单例管理EntityMgr类的信息
void System::update(const struct operation& op, struct stat_change& statcg){
    for (auto entity : EntityMgr.get_instance().m_Entities){
        if (entity.id == op.id){ //如果是要更改的对象

            syd::cout << "applying op\n";
            applyOp(entity, op);
            statcg.broadcast = 1;
            statcg->msg_len= entity.toBytes(statcg->status_bytes);
        }
    }
    // 通知要转发的成员，这里默认先广播
}


void System::applyOp( Entity& entity ,const struct operation& op){
    //将op应用到对应的entity上
    //
    if (&(entity->m_Components[1]) != nullptr) {
        //如果有transform组件
        entity->m_Components[1]->pos = op.pos;
        entity->m_Components[1]->face = op.face;
    }

    if (&(entity->m_Components[2]) != nullptr){
        //如果有character组件
        entity->m_Components[2]->status = op->status;
    }

}