#include <iostream>
#include<string> 
#include <stdlib.h>   /* _Exit, EXIT_FAILURE */
using namespace std;

// All classses are moved to this .h file. 
// Parent class gameStructure . All other classes inherite from parent class. 
// If there is an atribute listed in the parent class but child class doesn't need. 
// This will create a memory hole within the child class. 
// 

class gameStructure {

private:


public:
	gameStructure();
	/*When the function has no definition, we call such functions as “Do-nothing function or Pure virtual function”.
	The declaration of this function happens in the base class with no definition.
	https://www.mygreatlearning.com/blog/polymorphism-in-cpp/
	Abstraction
	*/
	virtual void help(); // pure virtual function declaration 

};


class Character : public gameStructure {
private:
	int health; // private property encapsulation

public:
	/*
	A virtual function is declared by keyword virtual.
	The return type of virtual function may be int, float, void.
	A virtual function is a member function in the base class.
	We can redefine it in a derived class. It is part of run time polymorphism.
	But, when the base class pointer contains the derived class address,
	the object always executes the base class function.
	For resolving this problem, we use the virtual function.
	https://www.mygreatlearning.com/blog/polymorphism-in-cpp/
	*/
	

	//in order to access private property health getter and setter methods are created. 
	// getter and setter methods are examples of Abstraction. 
	//Character constructor 
	Character();
	Character(int h); 
	//set methods are void
	void setHealth(int h); 
	//get methods use data type
	int getHealth(int h); 

	virtual int attack(int hitPoints);

	string name;

	/*examples of function overloading polymorphism*/
	void talk(string stuffToSay); 
	/*examples of function overloading polymorphism. void talk() method
	had only one parameter, now same method has two parameters.
	and outputs more lines than the first method.*/
	void talk(string name, string stuffToSay); 


	void help(); 


};

class Ninja : Character {
private:

public:
	// constructor, this line allocates memory space.
	// exact name as the class and has no return type. 
	Ninja();
	void throwStars();
	//override the virtual attack method from Character class
	//Overriding Polymorphism

	int attack(int hitPoints);

	void help();

};

class Pirate : Character {

public:
	// constructor, this line allocates memory space.
	Pirate();
	void useSword();

	//override the virtual attack method from Character class
	//Overriding Polymorphism
	int attack(int hitPoints);

	void help();
};

string story1(string playerName);
