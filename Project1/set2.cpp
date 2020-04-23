#include <iostream>
#include <string>
using namespace std;



int set2()
{
	string Choice;
	cout << " \n What will you do? will you go east? or will you go west?\n";
	getline(cin, Choice);

	if (Choice == "go east")
	{
		cout << "\n\nYou go east and into the distance, ending your adventure for a new one.\n\n";
		abort;
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