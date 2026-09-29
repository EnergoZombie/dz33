#pragma once
#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"
class Africa :
    public Continent
{
public:
	Herbivore* CreateHerbivore() const;
	Carnivore* CreateCarnivore() const;
	~Africa() = default;
};

