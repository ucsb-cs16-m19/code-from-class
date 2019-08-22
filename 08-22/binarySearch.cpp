#include <iostream>
using namespace std;

// return the index that the value lives at, otherwise -1
int binarySearch(int arr[], int size, int valueToLookFor) {
    // keep track of your "search space"
    int start = 0;
    int end = size-1;
    // keep searching in the middle as long as our search space 
    // makes sense
    // stop looking when start and end pass each other
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == valueToLookFor) {
            // we found it!
            return mid;
        } else if (arr[mid] > valueToLookFor) {
            // our guess was too high; look in the left half
            // start doesn't change; end becomes mid-1
            end = mid - 1;
        } else {
            // arr[mid] < valueToLookFor
            // our guess was too low; look in the right half
            // end doesn't change; start becomes mid+1
            start = mid + 1;
        }
    }

    // it wasn't there
    return -1;
}

int main(int argc, char *argv[])
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};

    cout << binarySearch(arr, 8, 70) << endl;
    cout << binarySearch(arr, 8, 10) << endl;
    cout << binarySearch(arr, 8, 30) << endl;
    cout << binarySearch(arr, 8, 42) << endl;

    return 0;
}