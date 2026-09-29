#pragma once
#include "Herbivore.h"
class Wildebeest :
    public Herbivore
{
public:
    Wildebeest() = default;
    Wildebeest(int w);

    void EatGrass();

    ~Wildebeest() = default;
};

