#include <iostream>
#include <cmath>

using namespace std;

class Shape {
private:
    double area;

public:
    
    Shape(double radius) {
        area = M_PI * radius * radius;
    }

  
    Shape(double length, double width) {
        area = length * width;
    }

    // Constructor for Triangle
    Shape(double base, double height, bool isTriangle) {
        if (isTriangle) {
            area = 0.5 * base * height;
        }
    }

  
    double getArea() const {
        return area;
    }
};

int main() {
    double radius, length, width, base, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Shape circle(radius);
    cout << "Area of the circle: " << circle.getArea() << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    Shape rectangle(length, width);
    cout << "Area of the rectangle: " << rectangle.getArea() << endl;


    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    Shape triangle(base, height, true);
    cout << "Area of the triangle: " << triangle.getArea() << endl;

    return 0;
}

