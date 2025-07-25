#include <iostream>
using namespace std;

int main(){
    float radius;
    float s_area, volume, PI;
    PI= 22.0 /  7;

    cout <<"Enter the radius of the sphere: " <<endl;
    cin >> radius;

    s_area= 4 * PI * radius * radius;
    volume= (4/3) * PI * radius * radius * radius;

    cout <<"The area of the sphere is: " << s_area << endl;
    cout << "The volume of the sphere is: " << volume << endl;
}