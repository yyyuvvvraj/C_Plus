#include <iostream>
using namespace std;

class Factorial{
    public:
    int calculate(int n){
        int fact=1;
        for(int i=2;i<=n;++i){
            fact *= i;
        }
        return fact;
    }
};

int  main(){
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    Factorial f;
    int result = f.calculate(num);
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;

}