/*******************************************************************
*   CS 307-01 Programming Assignment 1
*   File: Well.h
*   Author: Jaiden Gann
*   Desc:
*   Date: 7/7/22
*
*   I attest that this program is entirely my own work
*******************************************************************/

#ifndef OILWELLSIMULATION_WELL_H
#define OILWELLSIMULATION_WELL_H

#include "OilFieldDataParser.h"

class Well
{
public:
	Well(char* id, char* company, int num_sensors);

protected:
	char *_id;
	char *_company;
	int _num_sensors;

};

#endif // !OILWELLSIMULATION_WELL_H

