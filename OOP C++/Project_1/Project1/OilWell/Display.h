/*******************************************************************
*   CS 307-01 Programming Assignment 1
*   File: Display.h
*   Author: Jaiden Gann
*   Desc: Display the data
*   Date: 7/7/22
*
*   I attest that this program is entirely my own work
*******************************************************************/

#ifndef OILWELLSIMULATION_DISPLAY_H
#define OILWELLSIMULATION_DISPLAY_H

#include "Report.h"
#include <iostream>
class Display
{
public:
	Display(std::ostream* out)
	{
		_out = out;
	}

	//void info(Status *data);
private:
	std::ostream* _out;
};

#endif // !OILWELLSIMULATION_DISPLAY_H
