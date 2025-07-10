#include <iostream>
using namespace std;

int main(){
    int a,b;
     cout << "enter two integers: " << endl;
     cin >> a >> b;
    
     int x=a;
     int y=b;

     //Euclidean Algo
     while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
     }

     cout << "The GCD of " << x << " and " << y << " is: " << a << endl;

    
    return 0;
}