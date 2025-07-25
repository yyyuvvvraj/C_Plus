#include <iostream>
using namespace std;

void swap_m(int, int);

int main(){
    int a,b;
    cout << "Enter the value of a & b: "<< endl;
    cin >> a >> b;
    swap_m(a,b);
    cout << "Outside Fn, A: " << a << endl << "B: " << b << endl;

    return 0;
}

void swap_m(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout << "Inside Fn, A: " << a << endl << "B: " << b << endl;
}