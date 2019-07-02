#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            // this loop will execute n times
            cout << "* ";
        }
        // finish the line, then print a newline
        cout << "\n";
    }

    return 0;
}