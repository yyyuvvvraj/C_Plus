#include <iostream>
using namespace std;

int main(){
    //Area of Triangle
    int height,base;
    float area;

    cout << "Enter the height of the triangle: " << endl;
    cin >> height;

    cout<< "Enter the base of the triangle: "<< endl;
    cin>> base;

    area = height* base /2;
    cout << "The area of the traingle is: " << area << endl;
}
