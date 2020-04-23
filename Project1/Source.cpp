#include <iostream>
#include <string>
#include "PlayerName.h"
#include "DisplayIntroToUser.h"
#include "TheStoryStarts.h"
#include "set1.h"
#include "TheBar.h"
#include "set2.h"
#include "TheMarket.h"

using namespace std;
//---sample function end
int main()
{
	cout << "\n\n\t-----------Welcome to Hyrule, traveler!, This is your story, so why dont we take some time, get relaxed, and have a good time!-----------\t\n\n";
	//--- space ---
	string CallName;
	CallName = PlayerName();
	//--- space ---
	DisplayIntroToUser(Name);
	//--- space ---
	TheStoryStarts(Name);
	//--- space ---
	set1();
	//--- space ---
	TheBar();
	//--- space ---
	set2();
	//--- space ---
	TheMarket(Name);
	return 0;
}
