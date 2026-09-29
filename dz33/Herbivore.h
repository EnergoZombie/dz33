#pragma once
class Herbivore
{
protected:
	int weight = 0;
	bool life = true;
public:
	Herbivore() = default;
	Herbivore(int w);

	int GetWeight() const;
	void SetWeight(int w);
	bool IsAlive() const;

	void Death();

	virtual void EatGrass() = 0;

	virtual ~Herbivore() = default;
};

