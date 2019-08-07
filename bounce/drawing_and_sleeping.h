#ifndef DRAWING_AND_SLEEPING_H
#define DRAWING_AND_SLEEPING_H

#include <iostream>
#include <chrono>
#include <thread>
#include "point.h"
using namespace std;

// pause the program for a certain # of seconds
void sleep(double seconds); 
void clearScreen();
int getTerminalRows();
int getTerminalCols();
void drawCharAtPoint(Point p, char c);

#endif