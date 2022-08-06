/*******************************************************************
*   CS 307-01 Programming Assignment 1
*   File: OilWellSimulation.cpp
*   Author: Jaiden Gann
*   Desc: Starts the simulation
*   Date: 7/7/22
*
*   I attest that this program is entirely my own work
*******************************************************************/


#include <iostream>
#include "RunSim.h"

Simulation* sim;
int main()
{
    sim = new Simulation();
    sim->Run();

    return 0;
}

