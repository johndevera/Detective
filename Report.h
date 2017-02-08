#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
#include "City.h"

using namespace std;

#ifndef Report_H
#define Report_H

class Report {

public:
	Report();
	Report(City, string, int, int, int);
	~Report();

	void Report::generateReport(City, string, int, int, int); 
	void printReport(string, int, int, int, int);

private:

};
#endif