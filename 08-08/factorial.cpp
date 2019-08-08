#include <iostream>
using namespace std;

// this function is recursive because it calls itself
int factorial(int n) {
    // base case: n == 0, we can immediately return 1
    if (n == 0) return 1; 
    else {
        // we can assume that this works as long as we build up the 
        // right answer using it
        int recursiveResult = factorial(n-1); 
        return n * recursiveResult;
    }
}

int main(int argc, char *argv[])
{
    cout << factorial(5) << endl;

    return 0;
}