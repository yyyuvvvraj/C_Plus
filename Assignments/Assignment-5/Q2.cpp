#include <iostream>
using namespace std;

class ReverseNumber{
    public:
    int reverse(int n){
        int rev=0;
        while(n != 0){
            int rem = n % 10;
            rev= rev * 10 + rem;
            n= n / 10;
        }
        return rev;
    }
};

int main(){
    int number;
    cout << "Enter a numer to reverse: ";
    cin >> number;
    ReverseNumber r;
    int reversed = r.reverse(number);
    cout << "Reversed number is: " << reversed << endl;
    return 0;
}
