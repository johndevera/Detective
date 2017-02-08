#include "stdafx.h"
#include "Definitions.h"
#include "City.h"
#include "Person.h"
#include "Report.h"
#include "Suspector.h"


//Default Constructor
Suspector::Suspector() {
}

//Overloaded Constructor
Suspector::Suspector(City cityName, string type, int population) {
}

//Destructor
Suspector::~Suspector() {
}

string Suspector::getCityName(City city) { return city.getNewCityName(); }
int Suspector::getCityPopulation(City city) { return city.getNewCityPopulation(); }
int Suspector::getCrimeRate(City city) const { return city.getCrimeRate(); }

int Suspector::getTraits(City city, string rep, int trait, int type) const {
	return city.getTrait(rep, trait, type);
}
