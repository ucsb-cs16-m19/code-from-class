#include <iostream>
using namespace std;

// Point is a brand new data structure that holds
// an x and y coordinate
struct Point {
    double x;
    double y;
};

int main(int argc, char *argv[])
{
    Point p1; // initially p.x and p.y are uninitialized
    p1.x = 1;
    p1.y = 2;

    Point p2 = {3, 4}; // array syntax makes sense because x 
                       // and y are right next to each other 
                       // in memory

    cout << "p1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "p2: (" << p2.x << ", " << p2.y << ")" << endl;

    Point *q = &p1;

    // now I can change p1 through q

    (*q).x = 5;
    // or, using the -> shorthand
    q->y = 6; // equivalent to (*q).y = 6;

    cout << "p1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "p2: (" << p2.x << ", " << p2.y << ")" << endl;
    cout << "q: " << q << endl;
    cout << "the Point pointed to by q: " << "(" << (*q).x << ", " 
        << q->y << ")" << endl;

    return 0;
}