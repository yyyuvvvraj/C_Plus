#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cout << "Enter the size of the matrix (n x n): " <<endl;
    cin >> n;

    int arr[n][n], sol[n][n];

    cout << "Enter the elements of the matrix:" << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << "The original matrix is:" << endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Calculating the transpose of the matrix..." << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            sol[i][j] = arr[j][i];
        }
        cout << endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << sol[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}