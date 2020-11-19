#include "ComponentPool.h"
#include "Transform.h"
#include "Character.h"

Component* ComponentPool::createComponent(int type){
    //根据type生成一个对象
    switch (type)
    {
    case 1: 
        /* transform */
        Transform t;
        m_Pool.push_back(t);
        return dynamic_cast<Component*>(&t);

    case 2:
        /* character */
        Character c;
        m_Pool.push_back(c);
        return dynamic_cast<Component*>(&c);

    default:
        break;
        return nullptr;
    }


}



void ComponentPool::removeComponent(Component* component){


}