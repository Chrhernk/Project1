#pragma once
#include<string>
using namespace std;
// a classs is a template, and must be made befor you can make objects
// one class can make amany objects, saving you coding space

class Person
{



public:
	//public methods are just functions
	//prototype here
	void Talk(string stuffToSay);
	void Walk(int numberOfSteps);


	

	string HairColor;
private:
	string Name;
	string Age;
	int Health;

};
