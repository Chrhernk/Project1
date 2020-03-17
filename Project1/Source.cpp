#include <iostream>
#include <string>
using namespace std;
//---sample function begin
int main();
string PlayerName();
void DisplayIntroToUser(string Name);
void TheStoryStarts(string Name);
int set1();
void TheBar();
int set2();
void TheMarket(string Name);
//---sample function end
int main()
{
	cout << "\n\n\t-----------Welcome to Hyrule, traveler!-----------\t\n\n";
	//---
	string Name;
	Name = PlayerName();
	//---
	DisplayIntroToUser(Name);
	//---
	TheStoryStarts(Name);
	//---
	set1();
	//---
	TheBar();
	//---
	set2();
	//---
	TheMarket(Name);
	return 0;
}

string PlayerName()
{
	string Name;
	cout << "What is your Name?";
	getline(cin, Name);
	return Name;
}
void DisplayIntroToUser(string Name)
{
	cout << "\n\n\t Welcome " << Name << ", To your Legends begining. \n\n\t";
	cout << "\n\n Now, we start your adventure, hold tight, and enjoy the story!  \n\n";
	return;
}
void TheStoryStarts(string Name)
{
	cout << " \n You awake in a small stone room, chains around your ankles and wrists. \n" << endl;
	cout << " \n Your clothing are in tatters, and there are healing wounds on your cheeks, your left eye is throbbing and swelling. \n" << endl;
	cout << " \n You can not remember much, only that your name is " << Name << ", and you were in the tavern last night. \n" << endl;
	cout << " \n Inside the room are several old  chairs, worn and smooth, the legs broken and cracked, it looks as if you can take one of them. \n" << endl;
	cout << " \n To the North of you is an old door, metal bands holding it together, and a simple ring for the handle. \n" << endl;
	return;
}
int set1 ()
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
void TheBar()
{
	cout << "\nAfter you opened the door, you see the tavern you are in was near destroyed!\n";
	cout << "\nYour sword was dug into the bar, from what looked like a bad swing, and your shield was in the floor, seeming to have been used to break the boards.\n";
	cout << "\nThe hustle and bustle outside of the door was near blinding, it seemed to be near noon, the clock on the wall broken and stuck at seven at night.\n";
	cout << "\nAfter you took the weapons back, placing them into their proper places before you walked back outside to the world";
	cout << "to the west, you see an open air market, bustling with energy, and to the east, theres the open road.";
}
int set2()
{
	string Choice;
	cout << " \n What will you do? will you go east? or will you go west?\n";
	getline(cin, Choice);

	if (Choice == "go east")
	{
		cout << "\n\nYou go east and into the distance, ending your adventure for a new one.\n\n";
		exit;
	}
	else if (Choice == "go west")
	{
		cout << "\nyou go to the west, and to the open air market!\n\n";
		return 0;
	}
	else
	{
		cout << "\nThat is not an Option\n\n";
		set2();
	}
}
void TheMarket(string Name)
{
	cout << "\nThe market was full of people and delicious smells, the people around you all smiling to you\n";
	cout << "\nSome of the shops sold weapons and armors, oters with food and trinkets to buy";
	cout << "\nThe other shops were filled with magical items, and the power was pulsing and changing all the time";
	cout << "\nyou decide to pass through a few more of them, and pick up an amulet that is full of energy, in the shape of an eye.\n";
	cout << "\n And as you bought the eye, wrapping it around your neck, before you suddenly faded out of existance, and into a white abyss, a voice behinf you only saying ";
	cout << "Welcome back, " << Name << ". ";
	exit;
	return;
}   