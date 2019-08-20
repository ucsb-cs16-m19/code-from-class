#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int fib(int n) {
    if (n < 1) {
        cerr << "fib(n), where n is < 1, doesn't make sense!\n";
        return -1;
    }

    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int fib_iter(int n) {
    int nminus1 = 1, nminus2 = 1;
    for (int i = 0; i < n - 2; i++) {
        int oldnminus1 = nminus1;
        nminus1 = nminus1 + nminus2;
        nminus2 = oldnminus1;
    }

    return nminus1;
}

int main(int argc, char *argv[])
{
    cout << fib(7) << endl;
    // cout << fib(700) << endl;

    cout << fib_iter(700) << endl;

    return 0;
}