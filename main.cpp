#include <iostream>

#include "src/where.hpp"
using namespace std;

int main() {
    const char* prompt = "The quick brown fox";

    cout << "Character Tests:" << endl;

    cout << "find(prompt, 'e') returns the index: " << find(prompt, 'e') << endl;

    cout << "find(prompt, 'z') returns a fail: " << find(prompt, 'z') << endl;

    cout << "find(prompt, ' ') returns the index for space found: " << find(prompt, ' ') << endl << endl;


    cout << "Substring Tests:" << endl;

    cout << "find(prompt, \"quick\") returns a fail: " << find(prompt, "quick") << endl;

    cout << "find(prompt, \"quiet\") returns the index: " << find(prompt, "quiet") << endl;

    cout << "find(prompt, \"e\") returns a fail: " << find(prompt, "e") << endl;

    cout << "find(prompt, \"\") returns empty: " << find(prompt, "") << endl;


    const char* empty = "";

    cout << "find(empty, \"fox\") returns fail: " << find(empty, "fox") << endl;


    return 0;
}
