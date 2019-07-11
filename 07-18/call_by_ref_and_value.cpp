#include <iostream>
using namespace std;

void call_by_value(int z) {
    z++;
}

// the '&' means its an "reference to an int"
void call_by_reference(int &z) {
    z++;
}

int main(int argc, char *argv[])
{
    int x = 42;

    call_by_value(x); // x just got copied; z++ didn't affect it

    cout << x << endl;

    call_by_reference(x); // x just got used as z; z++ DID affect it

    cout << x << endl;

    return 0;
}