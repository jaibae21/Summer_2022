/*******************************************************************
*   CS 307-01 Programming Assignment 1
*   File: Report.h
*   Author: Jaiden Gann
*   Desc: Get the data for the Display
*   Date: 7/7/22
*
*   I attest that this program is entirely my own work
*******************************************************************/

#ifndef OILWELLSIMULATION_REPORT_H
#define OILWELLSIMULATION_REPORT_H

//#include insert file name that will handle wells
#include <string>
#include <vector>
class Report
{
public:
	//comment out until get to that part
	//Status(Well* well);

	//~Status();

	//std::vector<char *> getSensorInfo();

	//char* getWellInfo();
private: 
	char* well_info;
	std::vector<char*> _sensor_info;
};
#endif // !OILWELLSIMULATION_REPORT_H
