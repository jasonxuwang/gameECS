#pragma once
#include "data_structure.h"


class EntityMgr
{


    public: 
        std::map<int, Entity> m_Entities;

        EntityMgr() {};
        ~EntityMgr() {};
        void update (struct operation& op, struct stat_change& change );   //传入一个操作，对值进行更新, 将更新的返回给change



};

