#include <iostream>
#include <string>
using namespace std;


void DisplayIntroToUser(string CallName)
{
	cout << "\n\n\t Welcome " << CallName << ", To your Legends begining. \n\n\t";
	cout << "\n\n Now, we start your adventure, hold tight, and enjoy the story!  \n\n"; 
    for (; ;)
    {
        cout << "\n\nYou dream, it is an endless abyss, no body, and nothing around you";
        cout << "\nYou search around until you here an ominous voice...\n\n";

        cout << "Welcome back to the abyss~ to escape, and get back to 'Your' body, why dont you answer this for me?\n";
        cout << "I am here, Yet i am not, You can hear me through leaves when i am strong... What am I?\n";
        // Get user input so they can answer
        string input;
        getline(cin, input);
        if (input == "Wind")
            cout << "You have answered correctly... How Unfortunate...\n\n";
        break;
    }
	return;
}