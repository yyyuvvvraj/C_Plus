#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    string grade;
};

int main(){
    Student s1,s2;
    cout << "Enter the name ,age and grade of the first student: " << endl;
    cin >> s1.name >> s1.age >> s1.grade;
    cout << "Details of the first student: " << endl;
    cout << "Name: " << s1.name << ", Age: " << s1.age << ", Grade: " << s1.grade << endl;
    cout << "Enter the name ,age and grade of the second student: " << endl;
    cin >> s2.name >> s2.age >> s2.grade;
    cout << "Details of the second student: " << endl;
    cout << "Name: " << s2.name << ", Age: " << s2.age << ", Grade: " << s2.grade << endl;

    return 0;
}