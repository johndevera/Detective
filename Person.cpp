#include "stdafx.h"
#include "Definitions.h"
#include "Person.h"
#include <ctime>

//Default Constructor
Person::Person() {
	int randomPerson = rand() % 100; // Generate random number between 0 and 99
	int const numberOfElements = TRAITS + 1;
	for (int i = 0; i < numberOfElements; i++) {
		setRandomValues(i, randomPerson);
		}
}
//Overload Constructor
Person::Person(int age, int height, int gender, int race, int location, int home, int rep) {
	traits[AGE] = age;
	traits[HEIGHT] = height;
	traits[GENDER] = gender;
	traits[RACE] = race;
	traits[LOCATION] = location;
	traits[HOME] = home;
	traits[REP] = rep;
}

//Destructor
Person::~Person() {
}

//Accessor Functions
int Person::getTrait(int trait) const {
	return traits[trait];
}

//Mutator Functions
void Person::setTrait(int trait, int type) {
	traits[trait] = type;
}


/////////////////////////////// Random Mutator Functions instatiated by Person()

void Person::setRandomValues(int i, int random) {
	if (i == 0) { randomAge(random); }
	else if (i == 1) { randomHeight(random); }
	else if (i == 2) { randomGender(random); }
	else if (i == 3) { randomRace(random); }
	else if (i == 4) { randomLocation(random); }
	else if (i == 5) { randomHome(random); }
	else { randomTrait(random); } // i == 6
}


void Person::randomAge(int random) {
	traits[0] = random;
}

void Person::randomHeight(int random) {
	traits[1] = rand() % 45 + 156;
}

void Person::randomGender(int random) {
	if (random < 50) { traits[2] = 0; } //{ newGender = MALE; }
	else { traits[2] = 1; } //{ newGender = FEMALE; }
}

void Person::randomRace(int random) {
	if (random < 25) { traits[3] = 0; } //{ newRace = WHITE; }
	else if (random > 25 && random < 49) { traits[3] = 1; }  //{ newRace = BLACK; }
	else if (random > 50 && random < 74) { traits[3] = 2; } //{ newRace = ASIAN; }
	else traits[3] = 3;  //newRace = HISPANIC;
}

void Person::randomLocation(int random) {
	int randomLocation = random % 4 + 1;
	if (randomLocation == 1) { traits[4] = 0; } //{ newLocation = NORTH; }
	else if (randomLocation == 2) { traits[4] = 1; } //{ newLocation = SOUTH; }
	else if (randomLocation == 3) { traits[4] = 2; }//{ newLocation = EAST; }
	else { traits[4] = 3; } //newLocation = WEST;
}

void Person::randomHome(int random) {
	if (traits[3] == 0) { traits[5] = 0; }//{ newHome = NORTH; }
	if (traits[3] == 1) { traits[5] = 1; }//{ newHome = SOUTH; }
	if (traits[3] == 2) { traits[5] = 2; }//{ newHome = EAST; }
	if (traits[3] == 3) { traits[5] = 3; }//{ newHome = WEST; }
}

void Person::randomTrait(int random) {
	if (traits[4] != traits[5]) { traits[6] = 0; }//{ newTrait = BAD; } 
	else { traits[6] = 1; }//{ newTrait = GOOD; }
}