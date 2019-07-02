#include <iostream>
#include <cstdlib>
using namespace std;

// FUNCTION DECLARATION
double sum_series(int n);

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);

    // FUNCTION CALL
    cout << sum_series(n) << endl;    

    return 0;
}

// return_type name_of_function(arg_type arg_name, ...) {...}
// FUNCTION DEFINITION
double sum_series(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum = sum + 1.0 / i; // we want double division
        // or I could say sum += 1.0/i
    }

    return sum;
}