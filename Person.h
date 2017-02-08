#include "stdafx.h"
#include <iostream>
#include <string>
#include "Definitions.h"

using namespace std;

#ifndef Person_H
#define Person_H

class Person {

public:
	//Default Constructor
	Person();

	//Overload Constructor
	Person(int, int, int, int, int, int, int);

	//Destructor
	~Person();

	//Accessor Functions
	int getTrait(int) const; //returns whatever trait is specified

	//Mutator Functions
	void Person::setTrait(int, int);

	//Random Mutator Functions

	void Person::setRandomValues(int, int);
	void Person::randomAge(int);
	void Person::randomHeight(int);
	void Person::randomGender(int);
	void Person::randomRace(int);
	void Person::randomLocation(int);
	void Person::randomHome(int);
	void Person::randomTrait(int); // NEEDS TO WORK ONNNNNNNNNNNNNNN

private:
	int traits[TRAITS + 1];
};


#endif