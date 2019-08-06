#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

// the centroid of a bunch of points is the average point

// so, take an array of Points, and return a point that is the 
// avg x and y coordinate
Point centroid(Point *arr, int size) {
    Point answer = {0, 0};

    // sum up all the x and y coordinates
    for (int i = 0; i < size; i++) {
        answer.x += arr[i].x;
        answer.y += arr[i].y;
    }
    // create avg by dividing by size
    answer.x = answer.x / size;
    answer.y = answer.y / size;

    return answer;
}

int main(int argc, char *argv[])
{
    Point *arr_of_points = new Point[3]; 
    // arr_of_points points to the first element of this size-3 array 
    // on the heap

    arr_of_points[0].x = 1.5;
    arr_of_points[0].y = 3.5;
    arr_of_points[1].x = 4.5;
    arr_of_points[1].y = 5.5;
    arr_of_points[2].x = 6.5;
    arr_of_points[2].y = 7.5;

    Point c = centroid(arr_of_points, 3);

    cout << "centroid is: (" << c.x << ", " << c.y << ")\n";

    // *technically*, the program is about to end and all its memory will be
    // reclaimed anyway

    // but if I wanted to delete the arr_of_points array, I'd have to do:
    delete[] arr_of_points;

    return 0;
}