#include <iostream>
using namespace std;

int main(){
    // int x;
    // x=10;
    // float y=0.0;
    // y=1.1;
    // char z='a';
    // z='c';


    // int a=0;
    // cout << a;


    // int age;
    // cin >> age;
    // cout << "Hi, So your age is... " << age;

    // float height;
    // cin >> height;
    // cout << "Hi, So you are " << height << " m tall";

    // char initial;
    // cin >> initial;
    // cout << "Hi, So the initial letter of your name is " << initial;

    int age;
    char initial;
    float height;

    cout <<"Please enter your age" <<endl;
    cin >> age;
    cout << "Please enter your initial" <<endl;
    cin >> initial;
    cout << "Please enter your height" << endl;
    cin >>height;

    cout << "Hi! " << initial << " of " << age <<" age and " <<height <<"m height";
    return 0;
}