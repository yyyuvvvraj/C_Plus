#include <iostream>
using namespace std;

int main(){
    int i,j;
    int arr [3][3];
    cout << "Please enter the elements of the 3x3 matrix: " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is as follows: " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}