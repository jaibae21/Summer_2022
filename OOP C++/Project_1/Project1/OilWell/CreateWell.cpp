/*******************************************************************
*   CS 307-01 Programming Assignment 1
*   File: CreateWell.cpp
*   Author: Jaiden Gann
*   Desc:
*   Date: 7/7/22
*
*   I attest that this program is entirely my own work
*******************************************************************/

#include "CreateWell.h"


Well *CreateWell::createWell(OilFieldDataParser* data)
{
	//variables
	char* id = new char[32];
	char* opr = new char[32];
	int num_Sensors;

	data->getWellData(id, opr, &num_Sensors);
	Well* well = new Well(id, opr, num_Sensors); 


}