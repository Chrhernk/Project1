#include "Person.h"
#include <string>
#include <iostream>
using namespace std;


void Person::Talk(string stuffToSay)
{

	cout << endl << Name << " says: " << stuffToSay << endl;


}

void Person::Walk(int numberOfSteps)
{
	cout << "\n" << Name << "takes " << numberOfSteps << " steps" << endl; 

}
