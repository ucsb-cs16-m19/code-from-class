#include <iostream>
using namespace std;

void printFrom1ToN(int N);
void printFromNto1(int N = 5); // default parameter
// now I can just say printFromNto1() and it knows to do
// printFromNto1(5)

int main(int argc, char *argv[])
{
    printFrom1ToN(5);

    cout << endl;

    printFromNto1(5);

    cout << endl;

    printFromNto1();

    return 0;
}

void printFrom1ToN(int N) {
    // base case: N == 1
    if (N == 1) {
        cout << N << endl;
    } else {
        // recursive case
        // we get to assume that F(N-1) will print 1 to N-1
        // and then we need to solve the bigger problem by printing N
        printFrom1ToN(N-1);
        cout << N << endl;
    }
}

void printFromNto1(int N) {
    // base case: N == 1
    if (N == 1) {
        cout << N << endl;
    } else {
        // recursive case
        // we get to assume that F(N-1) will print N-1 to 1
        // and then we need to solve the bigger problem by printing N
        cout << N << endl;
        printFromNto1(N-1);
    }
}