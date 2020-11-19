#pragma once
#include "Entity.h"

class System
{

    public:
        System(){};
        ~System(){};

        void update(struct operation& op, struct stat_change& statcg);
        void applyOp( Entity& entity ,const struct operation& op);

};

