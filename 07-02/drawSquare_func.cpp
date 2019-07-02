#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;

// void means there is nothing returned, and that you should
// not try to assign the result of this function
void drawSquare(int size) {
    for (int j = 0; j < size; j++) {
        for (int i = 0; i < size; i++) {
            // this loop will execute n times
            cout << "* ";
        }
        // finish the line, then print a newline
        cout << "\n";
    }

    // there is no reason to return anything here
    // we're just printing stuff
}

int main(int argc, char *argv[]) {
    // assert takes a boolean-valued expression
    // if true, it lets continue, otherwise it stops the program with an error
    assert(argc == 2); // this makes sure that I have 1 command-line argument
    // it will stop the program if it isn't there

    // the code above is essentially the same as:
    /*
    
    if (argc != 2) {
        cerr << "Assertion failed\n";
        exit(1); // end the program
    }
    
     */

    int n = atoi(argv[1]);

    drawSquare(n); // this will print a nxn square

    return 0;
}