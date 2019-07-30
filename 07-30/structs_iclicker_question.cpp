#include <iostream>
using namespace std;

// Point is a brand new data structure that holds
// an x and y coordinate
struct Point {
    double x;
    double y;
};

struct Box {
    Point ul;
    double width;
    double height;
};

int main(int argc, char *argv[])
{
    // ul.x = 10;

    Box b1 = {{500, 800}, 10, 20};

    Box b2, b3;
    b2.ul = {500, 800}; // this syntax used to only work when 
                        // you declared and initialized all in 
                        // the same line
    // ^ if you want the above line to work/compile, use 
    // -std=c++11 when you compile

    return 0;
}