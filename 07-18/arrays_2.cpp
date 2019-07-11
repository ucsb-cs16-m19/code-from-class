#include <iostream>
using namespace std;

// scores can be of any size
// arrays do not get copied when you pass them to functions
double avgOfArray(double scores[], int size) {
    // sizeof(scores) won't work here; you have to pass along the size

    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += scores[i];
    }

    // scores is a reference to the starting address
    // of the array

    // that means scores[0], scores[1], etc.
    // are memory accesses

    scores[0] = 100;
    scores[1] = 100;
    scores[2] = 100;
    scores[3] = 100;
    scores[4] = 100;
    size = 500;

    // scores does NOT get copied like size does
    // when you call the function

    return sum/size;
}

int main() {
    // declares an array of doubles, called scores
    int size = 5;
    double scores[]={100, 90, 99, 50.5, 40};

    cout<< "Average midterm score is : " << avgOfArray(scores, size) <<endl;

    for (int i = 0; i < size; i++){
        cout << scores[i] << endl;
    }

    cout << "size: " << size << endl;

    return 0;
}