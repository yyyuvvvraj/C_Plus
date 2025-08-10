#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void calculateArea() = 0; 
};

class Rectangle : public Shape{
    private:
    double length,width;
    public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

class Traingle : public Shape{
    private:
    double base, height;
    public:
    Traingle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main(){
    double length,width,base,height;

    cout << "Enter length and width of Rectangle: ";
    cin >> length >> width;
    Rectangle rect(length, width);
    rect.calculateArea();
    cout << endl;

    cout << "Enter base and height of Triangle: ";
    cin >> base >> height;
    Traingle tri(base, height);
    tri.calculateArea();

    return 0;
}