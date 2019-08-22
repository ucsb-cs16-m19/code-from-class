#include <iostream>
#include <cmath>
using namespace std;

int max(int x, int y) {
    if (x > y) return x;
    else return y;
}

double my_sqrt(double x) {
    // make a guess for the square root, and then check it
    double low = 0;
    double high = max(1, x);
    double mid = (high + low) / 2;
    // stop when our guess is really close to the answer
    while (abs(mid*mid - x) > 0.00001) {
        mid = (high + low) / 2;
        // mid is our guess
        if (mid * mid < x) {
            // our guess was too low
            low = mid;
        } else {
            // our guess was too high
            high = mid;
        }
    }

    return mid;
}

int main(int argc, char *argv[])
{
    cout << my_sqrt(2) << endl;
    return 0;
}