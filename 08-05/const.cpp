#include <iostream>
using namespace std;

int valuePlus1(const int *value) {
    // *value = *value + 1; // COMPILER ERROR!
    return *value + 1;
}

int main(int argc, char *argv[])
{
    // constant variables can't change
    const double PI = 3.1415926535;

    cout << PI << endl;

    // PI = 4; // compiler error! You can't change a constant variable.

    int x = 5;
    cout << valuePlus1(&x) << endl; // valuePlus1 could set x, because I gave it a pointer
    cout << x << endl;

    return 0;
}