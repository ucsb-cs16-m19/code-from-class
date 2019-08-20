#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int countVowels(char *s) {
    int count = 0;

    // option 1: use strlen
    // for (int i = 0; i < strlen(s); i++) {
    //     if (s[i] == 'a' || s[i] == 'e' ||
    //         s[i] == 'i' || s[i] == 'o' ||
    //         s[i] == 'u') {
    //         count++;
    //     }
    // }

    // option 2: check for '\0' yourself
    int i = 0;
    while (s[i] != '\0') {
        char current_char = tolower(s[i]);
        if (current_char == 'a' || current_char == 'e' ||
            current_char == 'i' || current_char == 'o' ||
            current_char == 'u') {
            count++;
        }
        i++;
    }

    return count;
}

int main(int argc, char *argv[])
{
    char s1[] = "Hi mom!";
    char s2[] = "This is a string with several vowels in it!";
    char s3[] = "HI MOM!";

    cout << "# of vowels in " << s1 << ": " << countVowels(s1) << endl;
    cout << "# of vowels in " << s2 << ": " << countVowels(s2) << endl;
    cout << "# of vowels in " << s3 << ": " << countVowels(s3) << endl;

    return 0;
}