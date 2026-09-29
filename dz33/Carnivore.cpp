#include "Carnivore.h"

Carnivore::Carnivore(int p) : power(p) {}

int Carnivore::GetPower() const
{
	return power;
}
void Carnivore::SetPower(int p)
{
	power = p;
}
