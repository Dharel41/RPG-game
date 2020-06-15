#include<iostream>
#include"ekwipunek.h"
#include"postacie.h"
#include"przeciwnicy.h"
#include<string>
using namespace std;
void knight::wypisz()
{
	cout << "Panel postaci:" << endl;
	cout << "Profesja Knight " << endl;
	cout << "Level " << level << endl;
	cout << "Experience " << experience << endl;
	cout << "Health " << health << endl;
	cout << "Defense " << defense << endl;
	cout << "Attack " << attack << endl;
	cout << "Bron " << weapon.sword_name << " o ataku " << weapon.sword_attack <<endl;
	cout << "Zbroja " << armor.armor_name << " o obronie " << armor.armor_defense << endl << endl;
}
void archer::wypisz()
{
	cout << "Panel postaci:" << endl;
	cout << "Profesja Archer " << endl;
	cout << "Level " << level << endl;
	cout << "Experience " << experience << endl;
	cout << "Health " << health << endl;
	cout << "Defense " << defense << endl;
	cout << "Attack " << attack << endl;
	cout << "Bron " << weapon.bow_name << " o ataku " << weapon.bow_attack << endl;
	cout << "Zbroja " << armor.armor_name << " o obronie " << armor.armor_defense << endl << endl;
}
void sorcerer::wypisz()
{
	cout << "Panel postaci:" << endl;
	cout << "Profesja Sorcerer " << endl;
	cout << "Level " << level << endl;
	cout << "Experience " << experience << endl;
	cout << "Health " << health << endl;
	cout << "Defense " << defense << endl;
	cout << "Attack " << attack << endl;
	cout << "Bron " << weapon.wand_name << " o ataku " << weapon.wand_attack << endl;
	cout << "Zbroja " << armor.armor_name << " o obronie " << armor.armor_defense << endl<<endl;
}
void knight::knight_prize()
{
	static int odebrane = 3;
	if (level == 5 && odebrane == 3)
	{
		fire_sword a;
		weapon = a;
		attack = attack + a.sword_attack+a.fire_attack;
		odebrane--;
	}
	if (level == 8 && odebrane == 2)
	{
		plate_armor a;
		armor = a;
		defense = defense + a.armor_defense;
		odebrane--;
	}
	if (level == 15 && odebrane == 1)
	{
		avenger a;
		weapon = a;
		attack = attack + a.sword_attack;
		odebrane--;
	}
}

void archer::archer_prize()
{
	static int odebrane = 3;
	if (level == 5 && odebrane == 3)
	{
		hive_bow a;
		weapon = a;
		attack = attack + a.bow_attack;
		health = health + a.hp;
		odebrane--;
	}
	if (level == 8 && odebrane == 2)
	{
		paladin_armor a;
		armor = a;
		defense = defense + a.armor_defense;
		odebrane--;
	}
	if (level == 15 && odebrane == 1)
	{
		umbral_bow a;
		weapon = a;
		attack = attack + a.bow_attack;
		odebrane--;
	}
}

void sorcerer::sorcerer_prize()
{
	static int odebrane = 3;
	if (level == 5 && odebrane == 3)
	{
		wand_of_inferno a;
		weapon = a;
		attack = attack + a.wand_attack;
		odebrane--;
	}
	if (level == 8 && odebrane == 2)
	{
		focus_cape a;
		armor = a;
		defense = defense + a.armor_defense;
		odebrane--;
	}
	if (level == 15 && odebrane == 1)
	{
		wand_of_voodoo a;
		weapon = a;
		attack = attack + a.wand_attack;
		health = health + a.hp;
		odebrane--;
	}
}