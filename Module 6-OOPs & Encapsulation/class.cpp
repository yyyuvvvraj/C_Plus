#include <iostream>
using namespace std;

class Testing{
    private:
    int a;
    float b;
    public:
    int c;
    float d;
    void set_default(void){
        a=0;
        b=0;
    }
    void print_values(void){
        cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;
    }
};

int main(){
    Testing x;
    // x.a=5;
    x.c=8;
    x.d=0.1;
    x.set_default();
    x.print_values();

    return 0;

}