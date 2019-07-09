// to compile just this file into object code: g++ -c shapes.cpp
// to link all compiled code: g++ -o finalExecutableFileName shapes.o x.o y.o ...

#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
using namespace std;

string drawTriangle(int width) {
    // width better be odd and >= 3
    bool is_this_a_allowable_width = (width % 2 == 1 && width >= 3);
    if (!is_this_a_allowable_width) {
        // we got a bad width argument
        return ""; // return an empty string in this case
    }

    // if we're still executing, we got a "good" width

    // build up our result string
    string result = "";

    int number_of_stars_to_print_on_cur_line = 1;
    for (int i = 0; i < width / 2 + 1; i++) {
        // i keeps track of what line we're on
        
        // let's figure out how many spaces we need
        int num_spaces_total = width - number_of_stars_to_print_on_cur_line;
        int num_spaces_at_once = num_spaces_total / 2;

        // print spaces
        for (int j = 0; j < num_spaces_at_once; j++) {
            result += ' ';
        }

        // print stars
        for (int j = 0; j < number_of_stars_to_print_on_cur_line; j++) {
            result = result + '*';
        }

        // print spaces
        for (int j = 0; j < num_spaces_at_once; j++) {
            result += " ";
        }

        result += "\n";

        number_of_stars_to_print_on_cur_line += 2;
    }

    return result;
}