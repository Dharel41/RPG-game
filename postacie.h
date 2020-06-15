using namespace std;
class postac
{
	protected:
	int level;
	double health, defense,experience,attack;
	friend int main();
	template <class typ3>
	friend void levelup(typ3 &character);
	template <class typ, class typ2>
	friend void walka(typ &character, typ2 monster);


};
class knight:public postac
{
public:
	sword weapon;
	dagger a;
	armor armor;
	knight()
	{
		level = 1;
		experience = 0;
		health = 700;
		defense = 50;
		weapon = a;
		attack = 100;
		armor.armor_name = "BRAK";
		armor.armor_defense = 0;
	}
	void wypisz();
	void knight_prize();
};
class archer :public postac
{
public:
	bow weapon;
	elvish_bow a;
	armor armor;
	archer()
	{
		level = 1;
		experience = 0;
		health = 550;
		defense = 40;
		attack = 150;
		weapon = a;
		armor.armor_name = "BRAK";
		armor.armor_defense = 0;
	}
	void wypisz();
	void archer_prize();
};
class sorcerer :public postac
{
public:
	wand weapon;
	wand_of_vortex a;
	armor armor;
	sorcerer()
	{
		level = 1;
		experience = 0;
		health = 250;
		defense = 20;
		attack = 350;
		weapon = a;
		armor.armor_name = "BRAK";
		armor.armor_defense = 0;
	}
	void wypisz();
	void sorcerer_prize();
};
