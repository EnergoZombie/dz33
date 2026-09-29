#pragma once
#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"
class NorthAmerica :
    public Continent
{
public:
	Herbivore* CreateHerbivore() const;
	Carnivore* CreateCarnivore() const;
	~NorthAmerica() = default;
};

