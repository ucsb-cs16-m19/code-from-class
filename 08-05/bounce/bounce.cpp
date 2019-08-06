#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include "drawing_and_sleeping.h"
#include "point.h"
using namespace std;

// return a random number from `from` to `to`
int randomInt(int from, int to)
{
    assert(to >= from);
    return rand() % (to - from + 1) + from;
}

int main()
{
    // seed the random number generator, so that the program works
    // differently every time
    srand(time(0));

    Point ball = {0, 0};
    // direction is an offset (e.g., up-left is (-1, 1))
    Point direction = {0, 0};

    // initialize our ball at some random location on the terminal
    // ROWS AND COLS START AT (1,1), NOT (0,0)

    // initialize the ball in a random direction

    // clear the screen and draw the ball in its initial location

    return 0;
}


