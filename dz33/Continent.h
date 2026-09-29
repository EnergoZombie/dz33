#pragma once
#include "Herbivore.h"
#include "Carnivore.h"

class Continent
{
public:
	virtual Herbivore* CreateHerbivore() const = 0;
	virtual Carnivore* CreateCarnivore() const = 0;

	virtual ~Continent() = default;
};

