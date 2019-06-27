#include <iostream>
using namespace std; // so that I don't have to say std::cout all the time

int main()
{
    int n; // make space for a number
    cout << "Enter a number: ";
    cin >> n;

    cout << 1 / n << endl; // the compiler isn't smart enough to know
                           // that I'll sometimes divide by zero here

    cout << 1 / 0 << endl;

    return 0;
}