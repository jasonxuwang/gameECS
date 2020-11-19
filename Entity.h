#pragma once


#include<map>
#include "Component.h"
#include "ComponentPool.h"


class Entity
{


public:
	Entity() {};
	~Entity() {
		//先释放所有指针指向的对象

		//再clearmap

	};

	int32_t id;
	std::map<int, Component*> m_Components;


	//��ɾ��
	Component* getComponent(int type) {
		return m_Components[type];
	};


	void addComponent(int type, Component* component) {
		m_Components[type] = component;
		
	};


	void removeComponent(int type) {
		m_Components.erase(type);
	}

	int32_t to_bytes(char* bytes){
		//转换为Int

	}

};


