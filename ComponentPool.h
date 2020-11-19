#pragma once
#include "Component.h"

class ComponentPool
{

    std::vector<Component> m_Pool;
    
    public :
        ComponentPool (){

        };

        ~ComponentPool (){

        };  //析构时别忘记销毁所有的变量

        Component* createComponent(int type);
        void removeComponent(Component* component);

};

