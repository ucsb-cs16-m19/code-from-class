// to compile into an executable program
// called "hello", you do: g++ hello.cpp -o hello

#include <iostream> // gives us access to cout
using namespace std; // now I don't need the std:: 
                     // in front of cout

// whitespace doesn't matter to the C++ compiler

// functions start with { and end with a }
int main() {
    cout << "Hello, world!\n"; // every statement is ended
                               // by a semicolon

    return 0;
}