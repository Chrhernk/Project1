#include <iostream>
#include <string>
using namespace std;




string PlayerName()
{
	string CallName;
	cout << "What is your Name?";
	getline(cin, CallName);
	return CallName;
}