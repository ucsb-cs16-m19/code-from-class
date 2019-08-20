#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// if this were pass-by-value, technically the string would've been
// copied, so you wouldn't really need the const
string removeSpaces(const string &s) {
    string result = "";

    // iterate through s, and only add non-space characters
    for (int i = 0; i < s.length(); i++) {
        if (!isspace(s[i])) {
            // keep every non-space character
            result = result + s[i];
        }
    }

    return result;
}

int main(int argc, char *argv[])
{
    string s1 = "  Hi mom!\n";
    string s2 = "This is a string\nwith\tseveral vowels in it!";
    string s3 = " HI\tMOM!";

    cout << removeSpaces(s1) << endl;
    cout << removeSpaces(s2) << endl;
    cout << removeSpaces(s3) << endl;

    return 0;
}