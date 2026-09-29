#pragma once
#include "Herbivore.h"
class Bison :
    public Herbivore
{
public:
    Bison() = default;
    Bison(int w);

    void EatGrass();

    ~Bison() = default;
};

