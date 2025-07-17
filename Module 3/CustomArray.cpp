#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout << "Please enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Please enter the elements of the array: "<< endl;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        arr[i] *= 2;
        cout << arr[i]<< "\t";
    }
}