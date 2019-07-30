#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int d = 5;
    int &e = d; // we are making e be an alias for d
    int f = 10;
    e = f; // this assigns the value of f to e (a.k.a. d)
    // but does not change the fact that e is an alias to d
    // it doesn't become an alias to f or anything like that

    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;

    d = 4;
    e = 5;
    f = 6;

    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;

    return 0;
}