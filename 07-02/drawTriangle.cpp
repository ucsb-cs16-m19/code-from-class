#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < j+1; i++) {
            // this loop will execute j+1 times
            cout << "* ";
        }
        // finish the line, then print a newline
        cout << "\n";
    }

    return 0;
}