#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter two numbers for division: ";
    cin >> a >> b;
    try{
        if(b==0){
            throw "Division by zero error";
        }
        c=a/b;
        cout << "Result: " << c << endl;
    }
    catch (const char* msg){
        cout << "Division by zero not possible" << endl;
    }
}