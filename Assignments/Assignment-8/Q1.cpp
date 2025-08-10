#include <iostream>
using namespace std;

class destructor{
    public:
    int number;
    destructor(int num){
        number=num;
        cout << "Constructor : Object created with number = " << number << endl;
    }
    ~destructor(){
        cout  << "Destructor : Object with number = " << number << " is destroyed" << endl;
    }
};

int main(){
    cout <<"Entering main function" << endl;
    {
        destructor obj(48);
        cout << "Inside local scope." << endl;
    }
    cout << "Exited local scope." << endl;

    return 0;
}