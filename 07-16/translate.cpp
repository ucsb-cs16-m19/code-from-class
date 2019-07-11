#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string translate(string word) {
    if (word == "snow") {
        return "nieve";
    } else if (word == "mountain") {
        return "山";
    } else if (word == "kingdom") {
        return "Königreich";
    } else {
        return word; // just return the word otherwise
    }
}

int main(int argc, char *argv[])
{
    ifstream lyrics;
    lyrics.open("lyrics.txt");

    if (!lyrics) {
        cerr << "Error opening file.\n";
        return 1;
    }

    string word;
    // cin >> word; // when you cin into a string variable, you get a single word (i.e., something that was whitespace-separated)

    while (true) {
        // read a word
        lyrics >> word;

        if (!lyrics) {
            break;
        }

        // possibly translate the word
        string new_word = translate(word);

        // output the word
        cout << new_word;

        // preserve the whitespace after that word
        while (lyrics && isspace(lyrics.peek())) { // peek() gets a character *without* moving the cursor
            char space_char = lyrics.get(); // actually move the cursor
            cout << space_char;
        }
    }

    return 0;
}