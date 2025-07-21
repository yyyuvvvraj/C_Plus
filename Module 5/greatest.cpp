#include <iostream>
using namespace std;

int greatest(int x, int y, int z){
    if(x>= y){
        if(x>=z){
            return x;
        }else{
            return z;
        }
    }else{
        if(y>=z){
            return y;
        }else{
            return z;
        }
    }

}

int main(){
    int a, b, c, g;
    cout << "Enter the values of a, b, and c: " << endl;
    cin >> a >> b >> c;
    g = greatest(a,b,c);
    cout << "The greatest number is: " << g << endl;   
    return 0;

}