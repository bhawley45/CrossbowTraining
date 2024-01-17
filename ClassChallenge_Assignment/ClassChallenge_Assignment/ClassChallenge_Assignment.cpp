// ClassChallenge_Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape 
{
protected:
    string color;

public:
    double getArea();
};

class Rectangle : public Shape 
{
protected:
    double height;
    double width;

public:
    Rectangle(double h, double w) : height(h), width(w) {}

    double getArea() {
        return height * width;
    }
};

class Triangle : public Shape
{
protected:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double getArea() {
        return (height * base) / 2;
    }
};

class Circle : public Shape
{
protected:
    double radius;

public:
    Circle(double rad) : radius(rad) {}

    double getArea() {
        return 3.14159 * pow(radius, 2);
    }
};

int main()
{
    Rectangle myRectangle(4, 5);
    cout << "Area of rectangle: " << myRectangle.getArea() << '\n';

    Triangle myTriangle(2, 3);
    cout << "Area of triangle: " << myTriangle.getArea() << '\n';
    
    Circle myCircle(4);
    cout << "Area of circle: " << myCircle.getArea() << '\n\n';

    cout << "Press any key to continue...";
    cin.get();
}
