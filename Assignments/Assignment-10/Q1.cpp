#include <iostream>
#include <fstream> // for file handling
#include <string>
using namespace std;

int main() {
    string name;
    int studentClass, age;

    cout << "Enter student's name: ";
    getline(cin, name); // allows spaces in name

    cout << "Enter student's class: ";
    cin >> studentClass;

    cout << "Enter student's age: ";
    cin >> age;

    // Create and open file
    ofstream outFile("student_info.txt");
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    // Write data in structured format
    outFile << name << ", " << studentClass << ", " << age;

    cout << "Student information saved to 'student_info.txt'" << endl;

    outFile.close();
    return 0;
}
