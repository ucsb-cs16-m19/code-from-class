#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
using namespace std;

int main(int argc, char *argv[]) {
    // int n = atoi(argv[1]);

    // TEST-DRIVEN DEVELOPMENT:
    // write tests first before code

    // if all these tests "pass",
    // we can be confident that our program was correct
    assert(drawTriangle(4) == "");
    assert(drawTriangle(-3) == "");
    assert(drawTriangle(3) == " * \n***\n");
    assert(drawTriangle(5) == "  *  \n *** \n*****\n");
    assert(drawTriangle(7) == "   *   \n  ***  \n ***** \n*******\n");
}