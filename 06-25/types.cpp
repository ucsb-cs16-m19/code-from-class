// to compile: g++ types.cpp -o types

#include <iostream> // gives me cout
#include <string> // gives me the string type
using namespace std;

int main() {
    int n = 5; // declaration and initialization all-in-one
    cout << n << endl; // endl ≡ "\n"

    bool b; // delclares a variable called b
    // a declaration makes room in memory
    // the contents of b right now are undefined (random)
    cout << b << endl; // random garbage memory value
    b = true; // this actually sets b to be something
    cout << b << endl;

    string s = "hi"; // strings need double quotes
    cout << s << endl;

    double d;
    // d is currently uninitialized
    cout << d << endl; // d is some garbage memory value right now
    d = 3.14;
    // now d is initialized
    cout << d << endl;

    char c = 'h'; // only a single character
    cout << c << endl; 

    n = n + 1;
    cout << n << endl;   

    return 0;
}