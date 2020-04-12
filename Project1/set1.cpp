#include <iostream>
#include <string>
using namespace std;



int set1()
{
	string Choice;
	cout << " \n What will you do? open the door? Will you Take the chair leg?\n";
	getline(cin, Choice);

	if (Choice == "Open door" || Choice == "open door" || Choice == "open the door")
	{
		cout << "\n\nyou opened the door\n\n";
		return 0;
	}
	else if (Choice == "Take the chair leg")
	{
		cout << "\nYou took the leg of the Chair\n\n";
		set1();
	}
	else
	{
		cout << "\nThat is not an Option\n\n";
		set1();
	}
	return 0;
}