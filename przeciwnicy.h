using namespace std;
class monster
{
	public:
	double health, attack, exp;
};

class rat:public monster
{
public:
	rat()
	{
		health = rand() % 101 + 300;
		attack = rand() % 40 + 30;
		exp = health + attack;
	}
};
class bear :public monster
{
public:
	bear()
	{
		health = rand() % 101 + 500;
		attack = rand() % 40 + 120;
		exp = (health + attack)*1.5;
	}
};
class orc :public monster
{
public:
	orc()
	{
		health = rand() % 201 + 1000;
		attack = rand() % 50 + 200;
		exp = (health + attack)*3;
	}
};
class dragon :public monster
{
public:
	dragon()
	{
		health = rand() % 401 + 1500;
		attack = rand() % 100 + 250;
		exp = (health + attack)*5;
	}
};

class demon :public monster
{
public:
	demon()
	{
		health = rand() % 666 + 6666;
		attack = rand() % 66 + 666;
		exp = (health + attack)*8;
	}
};
