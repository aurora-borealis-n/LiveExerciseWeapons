#include "Gun.h"
Gun::Gun()
{
	Damage = 0;
	CoolDown = 0;
	Weight = 0;

	AmmoType = 0;
	AmmoQty = 0;
}

Gun::Gun(int damage, int coolDown, int weight)
{
	Damage = damage;
	CoolDown = coolDown;
	Weight = weight;

	AmmoType = 0;
	AmmoQty = 0;
}

Gun::Gun(int damage, int coolDown, int weight, int ammoType, int ammoQty)
{
	Damage = damage;
	CoolDown = coolDown;
	Weight = weight;

	AmmoType = ammoType;
	AmmoQty = ammoQty;
}

void Gun::Use()
{

}