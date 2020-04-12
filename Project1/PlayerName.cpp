#include <iostream>
#include <string>
using namespace std;




string PlayerName()
{
	string Name;
	cout << "What is your Name?";
	getline(cin, Name);
	return Name;
}