#pragma once
#include "Carnivore.h"

class Lion :
    public Carnivore
{
public:
    Lion() = default;
    Lion(int p);

    void Eat(Herbivore* h);

    ~Lion() = default;
};

