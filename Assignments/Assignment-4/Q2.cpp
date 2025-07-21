#include <iostream>
#include <cmath>
using namespace std;

int sum(int,int);
int diff(int,int);
int divide(int,int);
int mul(int,int);
int power(int,int);

int main(){
    int a,b,s,d,ans,m,p;
    cout << "Enter the values of a and b: " << endl;
    cin >> a >> b;

    int opr;
    cout << "Select the operator of your choice : " << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;   
    cout <<"3. Multiplication (*)" << endl;
    cout <<"4. Division (/)" << endl;
    cout <<"5. Power (^)" << endl;
    cin >> opr;

    switch (opr)
    {
    case 1:
        s=sum(a,b);
        cout << "The sum is: " << s << endl;
        break;
    case 2:
        d=diff(a,b);
        cout << "The difference is: " << d << endl;
        break;
    case 3:
        m=mul(a,b);
        cout << "The product is: " << m << endl;
        break;
    case 4:
        if(b != 0) {
            ans=divide(a,b);
            cout << "The division is: " << ans << endl;
        }else{
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    case 5:
        p=power(a,b);
        cout << "The power is: " << p << endl;
        break;
    default:
        cout << "Error: Invalid operator." << endl;
        break;
    }
    return 0;
}


int sum(int a, int b) {
    return a + b;
}
int diff(int a, int b) {
    return a - b;
}
int divide(int a, int b) {
    return a / b;
}
int mul(int a, int b) {
    return a * b;
}
int power(int a, int b) {
    return pow(a,b);
}