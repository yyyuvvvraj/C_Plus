#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    if(a==0){
        cout <<"The number is neither even nor odd. It is '0'." << endl;
    }else if(a%2==0){
        cout << "The number is even." <<endl;
    }else if(a%2!=0){
        cout << "The number is odd." << endl;
    }
}