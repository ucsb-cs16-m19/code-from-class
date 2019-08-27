#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main(int argc, char *argv[])
{   
    Point p1 = {1, 2};

    cout << p1 << endl;

    return 0;
}