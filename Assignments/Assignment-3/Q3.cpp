#include <iostream>
using namespace std;

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if it's an alphabet letter
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert to lowercase if it's uppercase
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;  // ASCII conversion
            }

            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
