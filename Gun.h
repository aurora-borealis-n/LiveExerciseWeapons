#pragma once
#include "Weapon.h"
class Gun : Weapon
{
	public:
		int AmmoType;
		int AmmoQty;
		Gun();
		Gun(int damage, int coolDown, int weight);
		Gun(int damage, int coolDown, int weight, int ammoType, int ammoQty);
		void Use();
};

