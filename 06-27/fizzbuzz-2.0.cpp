#include <iostream>
#include <cstdlib> // for atoi
using namespace std; // so that I don't have to say std::cout all the time

// there are two valid ways of defining a main function
// (1) int main()
// (2) int main(int argc, char *argv[])
/*
    argc and argv are for getting "command line arguments"
    (  so that I can run the program like $ ./fizzbuzz-2.0 15  )
    argc stands for "argument count"
    argv stands for "argument vector" (think of it as a list of strings)

    so, if we run our program with ./fizzbuzz-2.0 15 16 17
    argc = 4
    argv = ["./fizzbuzz-2.0", "15", "16", "17"]
*/

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cerr << "Hey man, you were supposed to give us 2 arguments.\n";
        exit(1); // stop the program
    }

    // get the number from the first command line argument
    int n = atoi(argv[1]);

    // if divisible by 3, print "fizz"; otherwise print the number
    if (n % 3 == 0 && n % 5 == 0) {
        // divisible by both
        cout << "fizzbuzz\n";
    } else if (n % 5 == 0) {
        // divisible by 5
        cout << "buzz" << endl;
    } else if (n % 3 == 0) {
        cout << "fizz\n";
    } else {
        // divisible by neither
        cout << n << endl;
    }

    return 0;
}