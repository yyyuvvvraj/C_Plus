#include <iostream>
using namespace std;

int power_m(int, int=0);

int main(){
    int x, y, ans;
    cout << "Enter the value of x and y, such that x^y: "<< endl;
    cin >> x >> y;
    ans= power_m(x,y);
    cout << "Value of " << x << " raised to " << y << " is: " << ans << endl;

    return 0;
}


int power_m(int a, int b){
    int output=1;
    for(int i=0;i<b;i++){
        output *= a;
    }
    return output;

}
