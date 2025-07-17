#include <iostream>
using namespace std;

int main() {
    char str[100];
    int freq[256] = {0}; 

    cout << "Enter a string: ";
    cin >> str;

  
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    cout << "Duplicate characters are: ";
    bool found = false;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            cout << (char)i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }

    cout << endl;
    return 0;
}
