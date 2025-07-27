#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

int main(){
    int res= sum(10, 20);
    cout << "Sum of two integers is: " << res << endl;

    double res2 = sum(10.5, 20.5);
    cout << "Sum of two doubles is: " << res2 << endl;

    int res3 = sum(10, 20, 30);
    cout << "Sum of three integers is: " << res3 << endl;

    return 0;
}