#include <iostream>
#include <string>
#include "Sellers.h"

using namespace std;

void TheMarket(string CallName)
{
	//making people

	Sellers FruitSeller("Orange Salesman", "300 years old", 100);
	Sellers MagicSeller("Jorge", "Unknown years old", 100);
	Sellers MagicMan("John", "Immortal", 1000);
	
	string& rName = CallName;
	
	string* p_name = &rName;
	


	cout << "\nThe market was full of people and delicious smells, the people around you all smiling to you\n";
	cout << "\nSome of the shops sold weapons and armors, others with food and trinkets to buy";
	FruitSeller.Talk ("Come and get ya Oranges here! Oranges only fifty ruppees");
	cout << "\nThe other shops were filled with magical items, and the power was pulsing and changing all the time";
	MagicSeller.Talk("Come and get your items of power! Prices vary~");
	cout << "\nyou decide to pass through a few more of them, and pick up an amulet that is full of energy, in the shape of an eye.\n";
	cout << "\n And as you bought the eye, wrapping it around your neck, before you suddenly faded out of existance, and into a white abyss, a voice behind you only saying ";
	MagicMan.Talk("Welecome back");
	cout << "As the mans voice chimed through the abyss, a name appears in your head " << p_name; 
	exit;
	return;










}