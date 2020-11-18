#pragma once
#include "Component.h"
#include <string>

class Character :
    public Component
{
public:
    int role;
    int status;

    Character() {};
    ~Character() {};

private:

};

