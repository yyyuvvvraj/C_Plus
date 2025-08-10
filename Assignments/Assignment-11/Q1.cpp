#include <iostream>
#include <string>
using namespace std;

int main() {
    string mainStr, subStr;

    cout << "Enter main string: ";
    getline(cin, mainStr);

    cout << "Enter substring: ";
    getline(cin, subStr);

    const char* mainPtr = mainStr.c_str();
    const char* subPtr = subStr.c_str();

    cout << "Starting positions of substring '" << subStr << "':" << endl;
    for (int i = 0; *(mainPtr + i) != '\0'; i++) {
        const char* tempMain = mainPtr + i;
        const char* tempSub = subPtr;

        while (*tempMain != '\0' && *tempSub != '\0' && *tempMain == *tempSub) {
            tempMain++;
            tempSub++;
        }

        if (*tempSub == '\0') { 
            cout << "Position " << i << endl;
        }
    }

    return 0;
}
