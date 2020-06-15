using namespace std;
class sword
{
	public:
	string sword_name;
	double sword_attack;
};

class dagger:public sword
{
public:
	dagger()
	{
		sword_name = "Dagger";
		sword_attack = 10;
	}
};

class fire_sword :public sword
{
public:
	double fire_attack = 50;
	fire_sword()
	{
		sword_name = "Fire Sword";
		sword_attack = 50;
	}
};

class avenger :public sword
{
public:
	avenger()
	{
		sword_name = "Avenger";
		sword_attack = 100;
	}
};

class bow
{
public:
	string bow_name;
	double bow_attack;
};

class elvish_bow :public bow
{
public:
	elvish_bow()
	{
		bow_name = "Elvish Bow";
		bow_attack = 10;
	}
};

class hive_bow :public bow
{
public:
	double hp = 100;
	hive_bow()
	{
		bow_name = "Hive Bow";
		bow_attack = 50;
	}
};

class umbral_bow :public bow
{
public:
	umbral_bow()
	{
		bow_name = "Umbral Bow";
		bow_attack = 100;
	}
};
class wand
{
	public:
	string wand_name;
	double wand_attack;
};

class wand_of_vortex :public wand
{
public:
	wand_of_vortex()
	{
		wand_name = "Wand of Vortex";
		wand_attack = 10;
	}
};

class wand_of_inferno :public wand
{
public:
	wand_of_inferno()
	{
		wand_name = "Wand of Inferno";
		wand_attack = 50;
	}
};

class wand_of_voodoo :public wand
{
public:
	double hp = 100;
	wand_of_voodoo()
	{
		wand_name = "Wand of Voodoo	";
		wand_attack = 100;
	}
};
class armor
{
	public:
	string armor_name;
	double armor_defense;
};

class plate_armor :public armor
{
public:
	plate_armor()
	{
		armor_name = "Plate Armor";
		armor_defense = 30;
	}
};

class paladin_armor :public armor
{
public:
	paladin_armor()
	{
		armor_name = "Paladin Armor";
		armor_defense = 20;
	}
};

class focus_cape :public armor
{
public:
	focus_cape()
	{
		armor_name = "Focus Cape";
		armor_defense = 10;
	}
};