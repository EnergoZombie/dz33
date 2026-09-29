#include "NorthAmerica.h"

Herbivore* NorthAmerica::CreateHerbivore() const
{
    return new Bison(50);
}

Carnivore* NorthAmerica::CreateCarnivore() const
{
    return new Wolf(60);
}
