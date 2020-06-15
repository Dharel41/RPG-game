#include<conio.h>
#include<iostream>
#include"ekwipunek.h"
#include"postacie.h"
#include"przeciwnicy.h"
#include<ctime>
#include<string>
#include<fstream>
using namespace std;
template <class typ, class typ2>
void walka(typ &character, typ2 monster)
{
	double hit = monster.attack - character.defense;
	double zycie = character.health;
	if (hit < 0)
		hit = 0;
	while (true)
	{
		character.health = character.health - hit;
		cout << "Twoje zycie " << character.health << endl;
		if (character.health < 0)
		{
			cout << "*** przegrales walke ***" << endl << endl;
			character.health = zycie;
			character.experience = character.experience - 0.1*character.experience;
			return;
		}
		monster.health = monster.health - character.attack;
		cout << "Zycie przeciwnika " << monster.health << endl;
		if (monster.health < 0)
		{
			cout << "*** wygrales walke ***" << endl << endl;
			character.health = zycie;
			character.experience = character.experience + monster.exp;
			return;
		}
		
	}

}
template <class typ3>
void levelup(typ3 &character)
{
	double tab[100];
	int lvl;
	tab[1] = 0;
	tab[2] = 3000;
	for (int i = 2;i<99;i++)
	{
		tab[i + 1] = tab[i] + 5000 + 0.2*tab[i];
	}
	for (int i = 2;i<100;i++)
	{
		if (character.experience <= tab[i])
		{
			lvl = i - 1;
			break;
		}
	}
	if (lvl>character.level)
	{
		character.level++;
		character.attack = character.attack + 10;
		character.health = character.health + 20;
		character.defense = character.defense + 5;
	}
	if (lvl<character.level)
	{
		character.level--;
		character.attack = character.attack - 10;
		character.health = character.health - 20;
		character.defense = character.defense - 5;
	}

}
fstream plik;












int main()
{
	int a;
	srand(time(NULL));
	cout << "***** Witamy w grze *****" << endl;
	cout << "Wybierz swoja postac" << endl << endl;
	cout << "[1]Knight" << endl;
	cout << "[2]Archer" << endl;
	cout << "[3]Sorcerer" << endl;
	cin >> a;
	if(a!=1 && a!=2 && a!=3)
	{
		cout << "Zly numer, podaj jeszcze raz" << endl;
		cin >> a;
	}
	switch (a)
	{
	case 1:
	{

		knight character;
		bool exit = true;
		cout << "Jestes rycerzem" << endl;
		character.wypisz();
		cout << endl;
		while (exit)
		{
			int b;
			cout << "Co chcesz zrobic?" << endl;
			cout << "[1]Rat hunting" << endl;
			cout << "[2]Bear hunting" << endl;
			cout << "[3]Orc hunting" << endl;
			cout << "[4]Dragon hunting" << endl;
			cout << "[5]Demon hunting" << endl;
			cout << "[6]Panel postaci" << endl;
			cout << "[7]Zapisz swoj wynik" << endl;
			cout << "[8]Historia rozgrywki" << endl;
			cout << "[9]Wyjdz z gry" << endl;
			cin >> b;
			switch (b)
			{
			case 1:
			{
				rat a;
				cout << "zostales zaatakowany przez rat" << endl;
				walka(character, a);
				levelup(character);
				character.knight_prize();
				break;
			}
			case 2:
			{
				bear a;
				cout << "zostales zaatakowany przez bear" << endl;
				walka(character, a);
				levelup(character);
				character.knight_prize();
				break;
			}
			case 3:
			{
				orc a;
				cout << "zostales zaatakowany przez orc" << endl;
				walka(character, a);
				levelup(character);
				character.knight_prize();
				break;
			}
			case 4:
			{
				dragon a;
				cout << "zostales zaatakowany przez dragon" << endl;
				walka(character, a);
				levelup(character);
				character.knight_prize();
				break;
			}
			case 5:
			{
				demon a;
				cout << "zostales zaatakowany przez demon" << endl;
				walka(character, a);
				levelup(character);
				character.knight_prize();
				break;
			}
			case 6:
				character.wypisz();
				break;
			case 7:
			{

				plik.open("zapis.txt", ios::app|ios::out);
				if (plik.good())
				{
					plik << "Level " << character.level << ", doswiadczenie " << character.experience << endl;
				}
				plik.close();
				break;
			}
			case 8:
			{
				plik.open("zapis.txt", ios::in);
				if (plik.good())
				{
					string napis;
					while(!plik.eof())
					{
						getline(plik,napis);
						cout << napis << endl;
					}
				}
				plik.close();
				break;
			}
			case 9:
				exit = false;
				break;
			}
		}
		break;
	}
	case 2:
	{
		archer character;
		bool exit = true;
		cout << "Jestes lucznikiem" << endl;
		character.wypisz();
		cout << endl;
		while (exit)
		{
			int b;
			cout << "Co chcesz zrobic?" << endl;
			cout << "[1]Rat hunting" << endl;
			cout << "[2]Bear hunting" << endl;
			cout << "[3]Orc hunting" << endl;
			cout << "[4]Dragon hunting" << endl;
			cout << "[5]Demon hunting" << endl;
			cout << "[6]Panel postaci" << endl;
			cout << "[7]Zapisz swoj wynik" << endl;
			cout << "[8]Historia rozgrywki" << endl;
			cout << "[9]Wyjdz z gry" << endl;
			cin >> b;
			switch (b)
			{
			case 1:
			{
				rat a;
				cout << "zostales zaatakowany przez rat" << endl;
				walka(character, a);
				levelup(character);
				character.archer_prize();
				break;
			}
			case 2:
			{
				bear a;
				cout << "zostales zaatakowany przez bear" << endl;
				walka(character, a);
				levelup(character);
				character.archer_prize();
				break;
			}
			case 3:
			{
				orc a;
				cout << "zostales zaatakowany przez orc" << endl;
				walka(character, a);
				levelup(character);
				character.archer_prize();
				break;
			}
			case 4:
			{
				dragon a;
				cout << "zostales zaatakowany przez dragon" << endl;
				walka(character, a);
				levelup(character);
				character.archer_prize();
				break;
			}
			case 5:
			{
				demon a;
				cout << "zostales zaatakowany przez demon" << endl;
				walka(character, a);
				levelup(character);
				character.archer_prize();
				break;
			}
			case 6:
				character.wypisz();
				break;
			case 7:
			{

				plik.open("zapis.txt", ios::app | ios::out);
				if (plik.good())
				{
					plik << "Level " << character.level << ", doswiadczenie " << character.experience << endl;
				}
				plik.close();
				break;
			}
			case 8:
			{
				plik.open("zapis.txt", ios::in);
				if (plik.good())
				{
					string napis;
					while (!plik.eof())
					{
						getline(plik, napis);
						cout << napis << endl;
					}
				}
				plik.close();
				break;
			}
			case 9:
				exit = false;
				break;
			}
		}
		break;
	}
	case 3:
	{
		sorcerer character;
		bool exit = true;
		cout << "Jestes magiem" << endl;
		character.wypisz();
		cout << endl;
		while (exit)
		{
			int b;
			cout << "Co chcesz zrobic?" << endl;
			cout << "[1]Rat hunting" << endl;
			cout << "[2]Bear hunting" << endl;
			cout << "[3]Orc hunting" << endl;
			cout << "[4]Dragon hunting" << endl;
			cout << "[5]Demon hunting" << endl;
			cout << "[6]Panel postaci" << endl;
			cout << "[7]Zapisz swoj wynik" << endl;
			cout << "[8]Historia rozgrywki" << endl;
			cout << "[9]Wyjdz z gry" << endl;
			cin >> b;
			switch (b)
			{
			case 1:
			{
				rat a;
				cout << "zostales zaatakowany przez rat" << endl;
				walka(character, a);
				levelup(character);
				character.sorcerer_prize();
				break;
			}
			case 2:
			{
				bear a;
				cout << "zostales zaatakowany przez bear" << endl;
				walka(character, a);
				levelup(character);
				character.sorcerer_prize();
				break;
			}
			case 3:
			{
				orc a;
				cout << "zostales zaatakowany przez orc" << endl;
				walka(character, a);
				levelup(character);
				character.sorcerer_prize();
				break;
			}
			case 4:
			{
				dragon a;
				cout << "zostales zaatakowany przez dragon" << endl;
				walka(character, a);
				levelup(character);
				character.sorcerer_prize();
				break;
			}
			case 5:
			{
				demon a;
				cout << "zostales zaatakowany przez demon" << endl;
				walka(character, a);
				levelup(character);
				character.sorcerer_prize();
				break;
			}
			case 6:
				character.wypisz();
				break;
			case 7:
			{

				plik.open("zapis.txt", ios::app | ios::out);
				if (plik.good())
				{
					plik << "Level " << character.level << ", doswiadczenie " << character.experience << endl;
				}
				plik.close();
				break;
			}
			case 8:
			{
				plik.open("zapis.txt", ios::in);
				if (plik.good())
				{
					string napis;
					while (!plik.eof())
					{
						getline(plik, napis);
						cout << napis << endl;
					}
				}
				plik.close();
				break;
			}
			case 9:
				exit = false;
				break;
			}
		}
		break;
	}
	}



	_getch();
}