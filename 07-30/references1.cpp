#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int d = 5;
    int &e = d; // we are making e be an alias for d
    // now I use e and d interchangeably

    cout << "d: " << d << endl;
    cout << "e: " << e << endl;

    d++;

    cout << "d: " << d << endl;
    cout << "e: " << e << endl;

    e++;

    cout << "d: " << d << endl;
    cout << "e: " << e << endl;

    return 0;
}