#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 10;

    a += 5;
    cout <<"Value of a: "<< a << endl;
    a *= 10;
    cout <<"Value of a: "<< a << endl;
    a -= 10;
    cout <<"Value of a: "<< a << endl;
    a /= 6;
    cout <<"Value of a: "<< a << endl;
    a %= 2;
    cout <<"Value of a: "<< a << endl;

    return 0;
}