================================================================================
                            Wells Project Overview
================================================================================

This program is meant to simulate an oil rig operation where there are multiple
oil wells and sensors that can be add to the wells to monitor what they are doing.
Created in Visual Studio 2019

*Note: I have simply attempted to create the files for this project. I'm submitting
more with the goal of just getting some files and code down for future use when we
build on this project. Its also so I have another type of visualization of how
everything is trying to interact.
References used were the programming hints provided to us along with the partial
functionality outline, and the previous documentation I submitted

This file is a summary of the .cpp files in this project and what they do. Their same named
.h files contains the function declarations and variables used. 


StartSimulation.cpp
    Creates the simulation object and then runs

RunSim.cpp
    The handler for startsimulation that controls the overall running of the program

OilFieldDataParser.cpp
    Provided by Instructor, grabs the data from the 

CreateWell.cpp
    Create well: initilize variables to hold the data from the data parser

CreateSensor.cpp
    Create Sensor: initilize variables to hold the data from the data parser

Well.cpp
    specifics of the well
    adds sensors to the well
    check what sensors are already on well

Sensor.cpp
    specifies sensor
    gets value for specific sensor

Report.cpp
    grabs the data about the Well and data from sensors on well

Display.cpp
    formats display of data it gets from Report.cpp
    Allows the RunSim.cpp to output Report to the console