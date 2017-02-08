#include "stdafx.h"
#include "Definitions.h"
#include "City.h"
#include "Person.h"



//Default Constructor
City::City() {
	string cityName;
	int cityPopulation;

	cout << "Please enter the name of your city: ";
	cin >> cityName;
	setNewCityName(cityName);
	while (true)
	{
		cout << "Please enter the population (A Number between " << LOWER_LIMIT << " and " << UPPER_LIMIT << "): ";
		cin >> cityPopulation;
		if (cityPopulation >= LOWER_LIMIT && cityPopulation <= UPPER_LIMIT) {
			setNewCityPopulation(cityPopulation);
			break;
		}
	}
	cout << endl;
	generateNewCityPopulation(cityPopulation, crimeRate);
}

//Overloaded Constructor
City::City(string name, int population) {
	newCityName = name;
	newCityPopulation = population;
	generateNewCityPopulation(population, crimeRate);
}

// Destructor
City::~City() {

}

//Accessor Functions
string City::getNewCityName() const { return newCityName; }
int City::getNewCityPopulation() const { return newCityPopulation; }
int City::getCrimeRate() const { return crimeRate; }


int City::getTrait(string rep, int trait, int type) {
	if (rep == BAD) {
		return cityBadTraits[trait][type];
	}
	else if (rep == GOOD) {
		return cityGoodTraits[trait][type];
	}
	else return cityBadTraits[trait][type] + cityGoodTraits[trait][type];
}

//Mutator Functions
void City::setNewCityName(string name) {
	newCityName = name;
};
void City::setNewCityPopulation(int population) {
	newCityPopulation = population;
};

void City::generateNewCityPopulation(int population, int crimeRate) {
	for (int i = 0; i < (double) population*crimeRate/100; i++) { // set up population of people
		Person citizen;
		setTraits(citizen);
	}
}

void City::setTraits(Person person) {
	for (int trait = GENDER; trait <= TRAITS - 1; trait++) {
		for (int type = 0; type <= 3; type++) {
			if (person.getTrait(trait) == type) {
				if (person.getTrait(REP) == BA) {
					cityBadTraits[trait][type] += 1;
				}
				else cityGoodTraits[trait][type] += 1;
				break;
			}
		}
	}
}

	void City::generateCrime(Person person) {

	}