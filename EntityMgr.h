#pragma once
#include "data_structure.h"
#include "Entity.h"

class EntityMgr
{


    public:
	static EntityMgr* get_instance()
	{
		static EntityMgr instance;
		return &instance;
	}

    std::map<int, Entity> m_Entities;
    static Entity * bytesToEntity(char* bytes, int32_t size);
    ~EntityMgr() {};


 
private:
	EntityMgr(){};



       

};

