#include <iostream>
using namespace std;

class Number{
    public:
    int value;
    Number(int v){
        value = v;
    }
    Number operator + (Number n){
        Number temp(0);
        temp.value=value + n.value;
        return temp;
    }
};

int main () {
    Number n1(5);
    Number n2(7);
    Number sum =n1 + n2;
    cout << "Sum: " << sum.value << endl;

    return 0;
}