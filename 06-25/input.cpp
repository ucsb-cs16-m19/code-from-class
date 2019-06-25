// to compile: g++ input.cpp -o input

#include <iostream> // gives me cout and cin
#include <string>
#include <cstdlib> // gives me exit
using namespace std;

int main() {
    // let's ask the user for a number

    // first we need to make room in memory for the number
    int n;
    // now we have room for a number!
    cout << "Enter a number: ";
    cin >> n; // this will let the user type a number,
              // and then after hitting Enter n will set 
              // to that number

    // the condition of the if statement has to be between ()
    if (n == 0) {
        // the body of the if statement has to go between braces
        // cerr is "error output"; it works just like cout
        // it's meant for printing errors/error info. only
        cerr << "Hey, you weren't supposed to type 0!\n";
        // return 1; // 1 IS AN ERROR EXIT CODE // returning from main ends the program
        exit(1); // exit will end the program from anywhere
    }

    // and print out that number + 1
    cout << "Your number plus 1 is: " << n + 1 << endl;

    return 0;
}