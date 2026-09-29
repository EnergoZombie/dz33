#include "Herbivore.h"

Herbivore::Herbivore(int w) : weight(w) {}

int Herbivore::GetWeight() const
{
	return weight;
}
void Herbivore::SetWeight(int w)
{
	weight = w;
}

bool Herbivore::IsAlive() const
{
	return life;
}
void Herbivore::Death()
{
	life = false;
}


