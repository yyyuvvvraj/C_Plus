#include <iostream>
using namespace std;

int main() {
    int i;
    float scores[5];
    cout << "Please input your array: " << endl;
    for(i=0;i<5;i++){
        cin >> scores[i];
    }
    cout << "The array you input is as follows: " << endl;
    for(i=0;i<5;i++){
        cout<< scores[i] << "\t";
    }
    return 0;
}
