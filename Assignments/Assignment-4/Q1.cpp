#include <iostream>
using namespace std;

void vote(int a){
    if(a>=18){
        cout << "You are eligible to vote." << endl;
    }
    else{
        cout << "You are ineligible to vote." << endl;
    }
}
int main(){
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    vote(age);

    return 0;
}