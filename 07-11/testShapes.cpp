#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
#include "tdd.h"
#include "shapes.h" // include our library with our drawTriangle func defn
// single quotes looks in the current directory for the header file
using namespace std;

int main(int argc, char *argv[]) {
    // int n = atoi(argv[1]);

    // TEST-DRIVEN DEVELOPMENT:
    // write tests first before code

    // if all these tests "pass",
    // we can be confident that our program was correct
    assertEquals("", drawTriangle(4), "drawTriangle(4)");
    assertEquals("", drawTriangle(-3), "drawTriangle(-3)");
    assertEquals(" * \n***\n", drawTriangle(3), "drawTriangle(3)");
    assertEquals("  *  \n *** \n*****\n", drawTriangle(5), "drawTriangle(5)");
    assertEquals("   *   \n  ***  \n ***** \n*******\n", drawTriangle(7), "drawTriangle(7)");
}