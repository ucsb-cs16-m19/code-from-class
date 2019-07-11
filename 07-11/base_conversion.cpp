/*

This program will convert between decimal and a given base (between 2 and 16).

It will take a decimal number from the command line, and then output
the converted number to cout.

*/

#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;

string convertToBase(int n, int b) {
    assert(n > 0 && 2 <= b && b <= 16);

    // n is the decimal # we want to convert
    // b is the base we want to convert it to

    string result = "";

    // repeatedly modulo and integer divide by the base
    // (stopping when n becomes 0)
    while (n != 0) {
        // get the current rightmost digit
        int current_digit = n % b;
        // add the digit to the result string
        // (e.g., if current_digit == 1, then we need to add '1' to result)
        char digit_character;
        if (current_digit <= 9) {
            digit_character = '0' + current_digit;
        } else {
            digit_character = 'A' + (current_digit - 10);
        }
        result = digit_character + result;
        // "shift" the number so that we can get the next digits
        n = n / b;
    }

    return result;
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " n b\n" << 
        "(Where n is a decimal number, and b is a base between 2 and 16.)\n";
        return 1;
    }

    int n = atoi(argv[1]);
    int b = atoi(argv[2]);

    cout << n << " converted to base " << b << " is " << convertToBase(n, b) << endl;

    return 0;
}