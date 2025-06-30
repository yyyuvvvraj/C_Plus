#include <iostream>
using namespace std;

int main(){
    int a,b,c,choice;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout <<"Select operation: "<< endl;
    cout <<"1. Addition" << endl;
    cout <<"2. Subtraction" << endl;    
    cout <<"3. Multiplication" << endl;
    cout <<"4. Division" << endl;
    cin >> choice;

    switch (choice){
     case 1:
        c=a+b;
        cout << "Addition Result: " << c << endl;
        break;
    case 2:
        c=a-b;
        cout << "Subtraction Result: " << c << endl;
        break;
    case 3:
        c=a*b;  
        cout << "Multiplication Result: " << c << endl;
        break;
    case 4:
        c=a/b;
        cout << "Division Result: " << c << endl;
        if(b == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    
    default:
        cout << "Invalid choice. Please select a valid operation." << endl;
        break;
    }

}