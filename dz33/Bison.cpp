#include "Bison.h"

Bison::Bison(int w) : Herbivore(w) {}

void Bison::EatGrass()
{
	if (life) { weight += 10; }
}
