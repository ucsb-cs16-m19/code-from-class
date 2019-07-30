#include <iostream>
using namespace std;

// Point is a brand new data structure that holds
// an x and y coordinate
struct Point {
    double x;
    double y;
};

// call by value: the Point gets copied
void printPoint(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

void printPointUsingPointers(Point *p) {
    cout << "(" << (*p).x << ", " << p->y << ")" << endl;
}

void initPoint(Point &p, double xVal, double yVal) {
    p.x = xVal;
    p.y = yVal;
}

int main(int argc, char *argv[])
{
    Point p1; // initially p.x and p.y are uninitialized
    p1.x = 1;
    p1.y = 2;

    Point p2 = {3, 4}; // array syntax makes sense because x 
                       // and y are right next to each other 
                       // in memory

    
    printPoint(p1);
    printPointUsingPointers(&p2);

    Point p3;
    // let's set p3 = (7, 8) using our initPoint function
    initPoint(p3, 7, 8);
    printPoint(p3); // should print (7, 8) instead of (?, ?)

    return 0;
}