/*******************************************************************
*   CS 307-01 Programming Assignment 1
*   File: Well.cpp
*   Author: Jaiden Gann
*   Desc:
*   Date: 7/7/22
*
*   I attest that this program is entirely my own work
*******************************************************************/
#define _CRT_SECURE_NO_WARNINGS	//disable deprecation warnings
#include "Well.h"

Well::Well(char* id, char* company, int num_sensors)
{
	this->_id = new char[32];
	this->_company = new char[32];

	strcpy(_id, id);
	strcpy(_company, company);
	this->_num_sensors = num_sensors;
}