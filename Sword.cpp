#include "Sword.h"

Sword::Sword()
{
	Damage = 0;
	CoolDown = 0;
	Weight = 0;
}

Sword::Sword(int damage, int coolDown, int weight)
{
	Damage = damage;
	CoolDown = coolDown;
	Weight = weight;
}

void Sword::Use()
{

}