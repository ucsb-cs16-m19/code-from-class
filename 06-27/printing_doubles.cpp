#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i =10;
    double j = 1/static_cast<double>(i); // j is correctly set to 0.1!
    cout.setf(ios::fixed);     // Using a fixed point representation
    cout.setf(ios::showpoint); //Show the decimal point
    cout.precision(3); // set 3 decimal places of precision
    cout<<j;
    return 0;
}
