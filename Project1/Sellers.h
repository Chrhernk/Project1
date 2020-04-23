#pragma once
#include<string>
using namespace std;

class Sellers
{



public:
	void Talk(string thingstosay);


	Sellers (string name, string age, int health);

	
private:
	string Name;
	string Age;
	int Health;

};

