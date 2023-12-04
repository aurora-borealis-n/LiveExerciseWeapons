#pragma once
#include "Weapon.h"
class Sword : Weapon
{
	public:
		Sword();
		Sword(int damage, int coolDown, int weight);
		void Use();
};

