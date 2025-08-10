#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("student_info.txt");
    if (!inFile) {
        cout << "Error: Could not open 'student_info.txt' for reading!" << endl;
        return 1;
    }

    string line;
    cout << "Content from 'student_info.txt':" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
