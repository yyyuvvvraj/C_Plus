#include <iostream>
using namespace std;

int main(){
    int i,n;
    for(n=1;n<=500;n++){
        int sum=0;
        for(i=1;i<n;i++){
            if(n%i==0){
                sum+=i;
            }
        }
        if(sum==n){
            cout << n << " ";
        }
    }

    return 0;
}