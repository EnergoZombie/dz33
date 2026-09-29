#include "Wildebeest.h"

Wildebeest::Wildebeest(int w) : Herbivore(w) {}

void Wildebeest::EatGrass()
{
	if (life) { weight += 10; }
}
