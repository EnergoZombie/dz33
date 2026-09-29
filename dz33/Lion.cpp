#include "Lion.h"

Lion::Lion(int p) : Carnivore(p) {}

void Lion::Eat(Herbivore* h)
{
	if (h->GetWeight() <= power && h->IsAlive())
	{
		h->Death();
		power += 10;
	}
	else
	{
		power -= 10;
	}
}


