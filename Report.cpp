#include "stdafx.h"
#include "Definitions.h"
#include "City.h"
#include "Person.h"
#include "Report.h"


//Default Constructor
Report::Report() {

}

//Overloaded Constructor
Report::Report(City city, string rep, int trait, int type, int population) {
	generateReport(city, rep, trait, type, population);
}

//Destructor
Report::~Report() {
}

//Functions
void Report::generateReport(City city, string rep, int trait, int type, int population) {
	if (rep == BAD) {
		printReport(rep, city.getTrait(rep, trait, type), trait, type, population);
	}
	else { // rep == GOOD
		printReport(rep, city.getTrait(rep, trait, type), trait, type, population);
	}
}

void Report::printReport(string rep, int value, int trait, int type, int population) {
	cout << trait << ":" << "\t" << (double) value / (double) population * 100 << "%" << " or " << value << " people." << endl;
}