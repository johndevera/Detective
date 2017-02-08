#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
#include "City.h"

using namespace std;

#ifndef Suspector_H
#define Suspector_H


class Suspector {

public:
	Suspector();
	Suspector(City, string, int);
	~Suspector();

	string getCityName(City);
	int getCityPopulation(City);
	int getCrimeRate(City) const;

	int getTraits(City, string, int, int) const;

private:

};

#endif