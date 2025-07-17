#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Please enter your year: " << endl;
    cin >> year;

    if(year % 4 ==0){
        cout << "It's a leap year!" << endl;
    }
    else{
        cout << "It's not a leap year!" << endl;
    }
}