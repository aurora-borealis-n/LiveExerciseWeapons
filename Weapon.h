#pragma once
class Weapon
{
	public:
		int Damage;
		int CoolDown;
		int Weight;
		Weapon();
		Weapon(int damage, int coolDown, int weight);
		void Use();
};

