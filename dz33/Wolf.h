#pragma once
#include "Carnivore.h"

class Wolf :
    public Carnivore
{
public:
    Wolf() = default;
    Wolf(int p);

    void Eat(Herbivore* h);

    ~Wolf() = default;
};

