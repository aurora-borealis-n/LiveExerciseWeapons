#include "Weapon.h"

Weapon::Weapon()
{
	Damage = 0;
	CoolDown = 0;
	Weight = 0;
}

Weapon::Weapon(int damage, int coolDown, int weight)
{
	Damage = damage;
	CoolDown = coolDown;
	Weight = weight;
}

void Weapon::Use()
{

}