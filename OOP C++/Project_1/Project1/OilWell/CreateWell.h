/*******************************************************************
*   CS 307-01 Programming Assignment 1
*   File: CreateWell.h
*   Author: Jaiden Gann
*   Desc:
*   Date: 7/7/22
*
*   I attest that this program is entirely my own work
*******************************************************************/

#ifndef OILWELLSIMULATION_CREATEWELL_H
#define OILWELLSIMULATION_CREATEWELL_H

#include "Well.h"
#include "OilFieldDataParser.h"

class CreateWell
{
private:

	Well *createWell(OilFieldDataParser* data);
};

#endif // !OILWELLSIMULATION_CREATEWELL_H
