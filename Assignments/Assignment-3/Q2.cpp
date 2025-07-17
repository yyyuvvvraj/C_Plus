#include <iostream>
using namespace std;

int main() {
    char str[100], ch;
    bool found = false;

    cout << "Enter a string (no spaces): ";
    cin >> str;

    cout << "Enter a character to search: ";
    cin >> ch;

    // Search for the character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            cout << "Character '" << ch << "' found at index " << i << "." << endl;
            found = true;
            break; // Remove this if you want all positions
        }
    }

    if (!found) {
        cout << "Character '" << ch << "' does not exist in the string." << endl;
    }

    return 0;
}
