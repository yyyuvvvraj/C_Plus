#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    try {
        int a;
        cout << "Enter an integer: ";
        cin >> a;
        if (cin.fail()) {
            throw 1;
        }

        string ch;
        cout << "Enter a character: ";
        cin >> ch;
        if (ch.length() != 1 || !isalpha(ch[0])) {  
            throw 'b';
        }

        cout << "Integer: " << a << ", Character: " << ch << endl;
    }
    catch (int) {
        cout << "Not an integer" << endl;
    }
    catch (char) {
        cout << "Not a character" << endl;
    }

    return 0;
}
