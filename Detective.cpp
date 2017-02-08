// Detective.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "City.h"
#include "Person.h"
#include "Report.h"
#include "Suspector.h"
#include "Definitions.h"
#include <ctime>


using namespace std;

int main()
{

	srand(time(NULL));
	City city;
	string name = city.getNewCityName();
	int population = city.getNewCityPopulation();
	
	cout << "The crime rates for the city of: " << endl;
	cout << "Name: \t\t" << name << endl;
	cout << "Population: \t" << population << endl;
	cout << "Sample Size: \t" << (double)population * city.getCrimeRate() / 100 << endl;
	cout << "Crime Rate: \t" << city.getCrimeRate() << "%"  << endl;
	cout << endl;

	Report report;
	report.generateReport(city, BAD, GENDER, MA, population);
	report.generateReport(city, BAD, GENDER, FE, population);
	report.generateReport(city, BAD, RACE, WH, population);
	report.generateReport(city, BAD, RACE, BL, population);
	report.generateReport(city, BAD, RACE, AS, population);
	report.generateReport(city, BAD, RACE, HI, population);
	report.generateReport(city, BAD, HOME, NO, population);
	report.generateReport(city, BAD, HOME, SO, population);
	report.generateReport(city, BAD, HOME, EA, population);
	report.generateReport(city, BAD, HOME, WE, population);
	cout << endl;
	report.generateReport(city, GOOD, GENDER, MA, population);
	report.generateReport(city, GOOD, GENDER, FE, population);
	report.generateReport(city, GOOD, RACE, WH, population);
	report.generateReport(city, GOOD, RACE, BL, population);
	report.generateReport(city, GOOD, RACE, AS, population);
	report.generateReport(city, GOOD, RACE, HI, population);
	report.generateReport(city, GOOD, HOME, NO, population);
	report.generateReport(city, GOOD, HOME, SO, population);
	report.generateReport(city, GOOD, HOME, EA, population);
	report.generateReport(city, GOOD, HOME, WE, population);


	Suspector AI;

	cout << endl;
	system("pause");
    return 0;
}
