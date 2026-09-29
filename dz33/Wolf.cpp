#include "Wolf.h"

Wolf::Wolf(int p) : Carnivore(p) {}

void Wolf::Eat(Herbivore* h)
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


