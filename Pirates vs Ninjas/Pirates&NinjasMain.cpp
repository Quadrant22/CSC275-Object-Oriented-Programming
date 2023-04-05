// Pirates vs Ninjas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 
#include <stdlib.h>   /* _Exit, EXIT_FAILURE */
#include "PiratesNinjas.h" // includes the function prototypes .h file that I created.
using namespace std;



int main()
{
	string playerName;
	story1(playerName);

	//gameStructure parentClass; // create an object of class
	//parentClass.help(); 

	Character firstChild;
	firstChild.attack(10);
	cout << "\n Character Hit Points: " << firstChild.attack(10) << endl;
	firstChild.setHealth(200);
	cout << "\n Character Health: " << firstChild.getHealth(200) << endl;
	//firstChild.getHealth(200);  // gethealth will get the value of health 
	firstChild.talk("\n Captin Sparrow says,If you were waiting for the opportune moment, that was it!");


	string name2;
	string stuffToSay2;
	firstChild.talk(name2, stuffToSay2);

	Ninja secondChild;
	secondChild.throwStars();
	//secondChild.attack(25);
	cout << secondChild.attack(25) << endl;
	secondChild.help();

	Pirate thirdChild;
	thirdChild.useSword();
	//thirdChild.attack(25);
	cout << thirdChild.attack(25) << endl;
	thirdChild.help();

	int choice;
	cout << "Enter 1 to exit. " << endl;
	cin >> choice;
	for (int i = 0; i < 1; i++) {

		if (choice == 1) {
			exit(EXIT_FAILURE);
		}

		else
		{
			cout << "Enter 1 to exit. " << endl;
		}
	}


	return 0;

};

