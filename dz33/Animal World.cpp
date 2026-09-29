#include <iostream>

#include "Continent.h"
#include "Africa.h"
#include "NorthAmerica.h"

#include "Herbivore.h"
#include "Wildebeest.h"
#include "Bison.h"

#include "Carnivore.h"
#include "Lion.h"
#include "Wolf.h"

using namespace std;

void MealsHerbivores(Herbivore** h, int s)
{
	for (size_t i = 0; i < s; i++)
	{
		h[i]->EatGrass();
	}
}

void NutritionCarnivores(Carnivore** c, int s, Herbivore** h)
{
	for (size_t i = 0; i < s; i++)
	{
		c[i]->Eat(h[i]);
	}
}

int main()
{
	int ch = 0;
	Continent* cont = nullptr;

	cout << "Choose continent(1 - North America, 2 - Africa): ";
	cin >> ch;

	switch (ch)
	{
	case 1:
		cont = new NorthAmerica();
		break;
	case 2:
		cont = new Africa();
		break;
	default:
		cont = new NorthAmerica();
		break;
	}

	int size;
	cout << "Enter number of animals: ";
	cin >> size;
	if (size <= 0) { size = 1; }

	Herbivore** herbivores = new Herbivore * [size];
	for (size_t i = 0; i < size; i++)
	{
		herbivores[i] = cont->CreateHerbivore();
	}
	Carnivore** carnivores = new Carnivore * [size];
	for (size_t i = 0; i < size; i++)
	{
		carnivores[i] = cont->CreateCarnivore();
	}
	herbivores[0]->SetWeight(75);

	cout << "----------- Before eating -----------\n";
	cout << "Herbivores: \n";
	for (size_t i = 0; i < size; i++)
	{
		cout << "[" << i+1 << "] | Weight: " << herbivores[i]->GetWeight() << ", Alive: ";
		if (herbivores[i]->IsAlive()) { cout << "Yes | "; }
		else { cout << "No | "; }
	}
	cout << "\nCarnivores: \n";
	for (size_t i = 0; i < size; i++)
	{
		cout << "[" << i + 1 << "] | Power: " << carnivores[i]->GetPower() << " | ";
	}
	cout << "\n------------=============------------\n";

	MealsHerbivores(herbivores, size);
	NutritionCarnivores(carnivores, size, herbivores);

	cout << "----------- After eating ------------ \n";
	cout << "Herbivores: \n";
	for (size_t i = 0; i < size; i++)
	{
		cout << "[" << i + 1 << "] | Weight: " << herbivores[i]->GetWeight() << ", Alive: ";
		if (herbivores[i]->IsAlive()) { cout << "Yes | "; }
		else { cout << "No | "; }
	}
	cout << "\nCarnivores: \n";
	for (size_t i = 0; i < size; i++)
	{
		cout << "[" << i + 1 << "] | Power: " << carnivores[i]->GetPower() << " | ";
	}
	cout << "\n------------============-------------\n";

	for (size_t i = 0; i < size; i++)
	{
		delete herbivores[i];
		delete carnivores[i];
	}
	delete[] herbivores;
	delete[] carnivores;
	delete cont;
}
