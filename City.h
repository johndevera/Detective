#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
#include "Definitions.h"

using namespace std;

#ifndef City_H
#define City_H


class City {

public:
	//Default Constructor
	City();

	//Overloaded Constructor
	City(string, int);

	//Destructor
	~City();
	
	//Accessor Functions
	string getNewCityName() const;
	int getNewCityPopulation() const;
	int getCrimeRate() const;
	int getTrait(string, int, int);

	//Mutator Functions
	void setNewCityName(string);
	void setNewCityPopulation(int);
	void generateNewCityPopulation(int, int);
	void setTraits(Person);
	void generateCrime(Person);

private:
	int crimeRate = 100; //in %
	int LOWER_LIMIT = 1000;
	int UPPER_LIMIT = 10000000;
	string newCityName;
	int newCityPopulation;
	int cityBadTraits[TRAITS][TYPES] = { 0 };
	int cityGoodTraits[TRAITS][TYPES] = { 0 };
};

#endif
