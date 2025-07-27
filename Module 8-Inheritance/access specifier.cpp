#include <iostream>
using namespace std;

class Parent{
    private:
    int x;
    public:
    int y,z;
};
class Child: public Parent {
    private:
    int m;
    public:
    int n;
    void setValue(int a,int b,int c,int d){
        y=a;
        z=b;
        m=c;
        n=d;
    }
    void printVal(void){
        cout << y << " " << z << " " << m << " " << n << endl;
    }
};

int main(){
    Child b;
    b.setValue(1,2,3,4);
    b.printVal();


    return 0;
}