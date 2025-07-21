#include <iostream>
using namespace std;

void max_two(int a, int b){
    if(a>b){
        cout << "The maximum of " << a << " and " << b << " is: " << a << endl;
    }else{
        cout << "The maximum of " << a << " and " << b << " is: " << b << endl;
    }
}

int main(){
    int a,b;
    cout << "Enter the values of a and b: "<< endl;
    cin >> a >> b;
    max_two(a,b);

    return 0;
}