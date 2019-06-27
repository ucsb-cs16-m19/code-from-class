#include <iostream>
using namespace std; // so that I don't have to say std::cout all the time

int main()
{
    int n; // make space for a number
    cout << "Enter a number: ";
    cin >> n;

    // if divisible by 3, print "fizz"; otherwise print the number
    if (n % 3 == 0) {
        cout << "fizz\n";
    } else {
        cout << n << endl;
    }

    return 0;
}