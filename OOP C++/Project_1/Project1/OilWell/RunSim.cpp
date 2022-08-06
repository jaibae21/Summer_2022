/*******************************************************************
*   CS 307-01 Programming Assignment 1
*   File: RunSim.cpp
*   Author: Jaiden Gann
*   Desc: Acts as the handler for the whole thing
*   Date: 7/7/22
*
*   I attest that this program is entirely my own work
*******************************************************************/
#define _CRT_SECURE_NO_WARNINGS //disable deprecation warning
#include "RunSim.h"
//Classes needed for timer loop
#include <sys/timeb.h>
#include <sys/types.h>
#include <time.h>	
//Classes needed for keyboard input check
#include <iostream>
#include <conio.h>
#include <stdio.h>
//Class needed for ranom sensor value
#include <stdlib.h>

//create the simulaion object and initialize display
Simulation::Simulation()
{
	
}

void Simulation::Run()
{
	//TimerLoop setup
	struct _timeb tStruct;
	double current_time;
	double target_time;
	bool done = false;
	//Keyboard check setup
	int hit;
	char ch;
	//Random seed generator
	srand((unsigned int)(time(NULL)));

	
	//read the file- done inside the constructor for dataparser
	_data = OilFieldDataParser::OilFieldDataParser("./OilFieldData.xml");
	//_data.OilFieldDaaParser("OilFieldData.xml");	//constructor not being recognized for some reason

	//Gather time and set target
	_ftime(&tStruct);
	current_time = tStruct.time + (((double)(tStruct.millitm)) / 1000.0);
	target_time = current_time + 5.0;

	while (!done) //loop
	{
		_ftime(&tStruct);
		current_time = tStruct.time + (((double)(tStruct.millitm)) / 1000.0);
		target_time = current_time + 5.0;
		//check user input
		hit = _kbhit();
		if (hit)
		{
			ch = _getch();
			switch (ch)
			{
			case 'w':
				//editwell
				break;
			case 's':
					//add/remove sensor
					break;
			case 'q':
				return;	//stop simulation
				break;
			default:
				cout << "Invalid Input\n";
				break;
			}
		}

		//print output
		if (current_time >= target_time)
		{
			target_time += 5.0;
			//print status from well
		}
	}
	

}