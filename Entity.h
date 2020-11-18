#pragma once


#include<map>
#include "Component.h"


class Entity
{


public:
	Entity() {};
	~Entity() {};

	int32_t id;
	std::map<int, Component> m_Components;


	//��ɾ��
	Component getComponent(int type) {
		return m_Components[type];
	};


	void addComponent(int type, Component component) {
		m_Components[type] = component;
		
	};


	void removeComponent(int type) {
		m_Components.erase(type);
	}


};


