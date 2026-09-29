#pragma once
#include "Herbivore.h"

class Carnivore
{
protected:
	int power = 0;
public:
	Carnivore() = default;
	Carnivore(int p);

	int GetPower() const;
	void SetPower(int p);

	virtual void Eat(Herbivore* h) = 0;

	virtual ~Carnivore() = default;
};

