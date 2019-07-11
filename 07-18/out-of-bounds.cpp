#include <iostream>
using namespace std;


int main() {

    int arr[] = {20,10,50}; // declare and initialize 

    // accessing past the end of an array is undefined behavior--any can happen
    // most likely your program will either end with a run-time error or continue
    // because it read some other element in memory
    for (int i = 0; i <= 3; i++) {
        arr[i] = arr[i] + 10;
    }

    // often you can read past the end of array with no run-time error
    // that is really weird and you should never do it!
    for (int i = 0; i <= 100; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}