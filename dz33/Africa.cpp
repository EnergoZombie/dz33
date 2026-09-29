#include "Africa.h"

Herbivore* Africa::CreateHerbivore() const
{
    return new Wildebeest(50);
}

Carnivore* Africa::CreateCarnivore() const
{
    return new Lion(60);
}
