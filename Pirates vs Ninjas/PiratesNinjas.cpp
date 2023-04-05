#include <iostream>
#include<string> 
#include <stdlib.h>   /* _Exit, EXIT_FAILURE */
#include "PiratesNinjas.h" // includes the function prototypes .h file that I created.
using namespace std;

// The class constructor methods are copied from .h to this .cpp file 
// indicate what class the method is associated with

/* in this file instead of class gameStructure {} using gameStructure:: gameStructure*/
gameStructure::gameStructure() {};
void gameStructure::help() {};


Character::Character(int h) : gameStructure(){}; 
	//Character();
	//Character(int h) {
	//	health = h;
	//};
	//set methods are void
	void Character :: setHealth(int h) {
		health = h;
		if (health < 0) {
			health = 0;
			cout << "\n Character has Expired." << endl;

		}
	}
	//get methods use data type
	int Character :: getHealth(int h) {
		health = h;
		return health;
	}


int Character :: attack(int hitPoints) {

		hitPoints = 10;
		//cout << "\n Character HitPoints: " << hitPoints << endl;
		return hitPoints;

}



	/*examples of function overloading polymorphism*/
void Character :: talk(string stuffToSay) {
		//string n; 
		//cout << "\n Say your name." << endl;
		//cin >> n;
		//cout << "\n Hi" << n << endl;
		cout << "\n Captin Sparrow says,If you were waiting for the opportune moment, that was it!" << endl;

}
	/*examples of function overloading polymorphism. void talk() method
	had only one parameter, now same method has two parameters.
	and outputs more lines than the first method.*/
void Character:: talk(string name, string stuffToSay) {

		//string name; 
		//string stuffToSay;

		cout << "\n Remind me, what was your name again?" << endl;
		cout << "\n Say your name." << endl;
		cin >> name;
		cout << "\n Aye." << endl;
		cout << "\n I'm dishonest, and a dishonest man you can always trust to be dishonest." << endl;

}


void Character:: help() {

}




Ninja::Ninja() : Character (){

	// constructor, this line allocates memory space.
	// exact name as the class and has no return type. 
	//Ninja() {};
}

	
void Ninja :: throwStars() {

		cout << "\n You can borrow my shuriken star!." << endl;

}
	//override the virtual attack method from Character class
	//Overriding Polymorphism

int Ninja :: attack(int hitPoints) {

		hitPoints = 25;
		cout << "\n Ninja Hit Points:  " << endl;
		return hitPoints;

}

void Ninja :: help() {
		cout << "\n Ninja Kawakami, throwing blades- The shuriken stars." << endl;
}




Pirate :: Pirate() : Character() {
	// constructor, this line allocates memory space. 
}

void Pirate :: useSword() {

		cout << "\n If you missed your target, I am here with my sword!." << endl;
}

	//override the virtual attack method from Character class
	//Overriding Polymorphism
int Pirate :: attack(int hitPoints) {

		int pointsHits = 25;
		cout << "\n Pirate Hit Points:  " << endl;
		return pointsHits;

}

void Pirate :: help() {

		cout << "\n Pirates are navigating the ship..." << endl;
}


string story1(string playerName) {

	string t = playerName;
	cout << "\n  Welcome to Pirates Vs Ninjas." << endl;
	cout << "\n  The Northern Pirates of the BlackSea partnered with the Ninjas of the Darkest Underground. " << endl;
	cout << "\n  To get the Emeralds and Pearls, the Pirates are planning an Ambush!" << endl;
	cout << "\n  No soul could plan an Ambush like the Ninjas." << endl;
	cout << "\n Enter your name to join the ship." << endl;
	cin >> t;
	cout << "\n Hello " << t << " Welcome Aboard!" << endl;
	return t;
}