#include <iostream>
using namespace std;

// this function is recursive because it calls itself
void printArrayRecursively(int *arr, int size) {
    // we're gonna break down the array into:
    // (1) the first element
    // (2) the smaller array

    if (size == 0) {
        // print nothing, because the array is empty
        return;
    }

    int firstElement = arr[0];
    int *smallerArray = arr + 1;

    cout << firstElement << endl;

    // now, I'll solve the smaller problem!
    // (i.e., I'll call this *same* function inside of itself)
    printArrayRecursively(smallerArray, size - 1);
}

int main(int argc, char *argv[])
{
    int a[] = {10, 50, 20, 40};

    printArrayRecursively(a, 4);

    return 0;
}