#include "Sellers.h"
#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Sellers::Sellers(string name, string age, int health)
{

	Name = name;
	Age = age;
	Health = health;
};
void Sellers::Talk(string thingstosay)
{

	cout << endl << Name << " says: " << thingstosay << endl;


}