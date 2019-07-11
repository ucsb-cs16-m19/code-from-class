// this #ifndef, #define, #endif stuff keep you
// from getting into an infinite loop of inclusion
#ifndef SHAPES_H
#define SHAPES_H

#include <string>
using namespace std;

// a file ending in .h is called a "header file"
// it is all you need to compile any file that uses these functions
// (but you need the implementation to link)

// we'll #include "shapes.h" anywhere we need the drawTriangle function

// this declaration is all the user needs to see to use your function
// they don't need to care about how it was implemented
string drawTriangle(int width);

#endif