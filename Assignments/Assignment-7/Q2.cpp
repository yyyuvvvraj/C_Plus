#include <iostream>
using namespace std;

class Base
{
private:
    int data1, data2;
public:
    Base(int a = 0, int b = 0): data1(a), data2(b) { }
    
    // Getter functions to access private members
    int getData1() const { return data1; }
    int getData2() const { return data2; }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << " data1 = " << getData1() << " data2 = " << getData2() << endl;
    }
};

int main(void)
{
    Derived d;
    d.show();
    return 0;
}
