/*******************************************************************
*   CS 307-01 Programming Assignment 1
*   File: RunSim.h
*   Author: Jaiden Gann
*   Desc: 
*   Date: 7/7/22
*
*   I attest that this program is entirely my own work
*******************************************************************/


#ifndef OILWELLSIMULATION_RUNSIM_H
#define OILWELLSIMULATION_RUNSIM_H


#include "OilFieldDataParser.h"

class Simulation
{
public:
		
		Simulation(); 

		void Run();
	
private: 
	OilFieldDataParser _data;	//making a pointer gives errors
	
};

#endif 