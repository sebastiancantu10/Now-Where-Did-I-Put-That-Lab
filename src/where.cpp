#include <string>
using namespace std;

// find char in string
int find(const char* string, char value) {
    int i = 0;

    // loop until null terminator
    while (string[i] != '\0') {
        if (string[i] == value) {
            return i; // char accquired
        }

        i++;

    }
    return -1; // char missing
}

int find(const char* string, const char* substring) {

    // empty case
    if (substring[0] == '\0') {
        return 0;
    }

    // loop the whole string
    for (int i = 0; string[i] != '\0'; i++) {

        int j = 0;

            // check the remaining
            while (substring[j] != '\0' && string[i + j] == substring[j]) {
                j++;
            }

            // end of string so it matched
            if (substring[j] == '\0') {
                return i; // match found. return index
            }

    }
    return -1; // char missing
}


