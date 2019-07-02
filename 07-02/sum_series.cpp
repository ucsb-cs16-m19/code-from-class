#include <iostream>
using namespace std;

int main() {
    cout << "Enter n: ";
    int n;
    cin >> n;

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum = sum + 1.0 / i; // we want double division
        // or I could say sum += 1.0/i
    }

    cout << sum << endl;    

    return 0;
}