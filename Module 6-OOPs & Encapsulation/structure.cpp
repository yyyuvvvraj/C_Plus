#include <iostream>
using namespace std;

struct complex_number{
    int real;
    int imag;
};

int main(){
    complex_number a,b,c;
    cout << "Enter the real and imaginary parts of the complex nos respectively: " << endl;
    cin >> a.real >> a.imag;
    cin >> b.real >> b.imag;
    cout << "Adding...." << endl;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    cout << c.real << " + " << c.imag << "i" << endl;


    return 0;
}