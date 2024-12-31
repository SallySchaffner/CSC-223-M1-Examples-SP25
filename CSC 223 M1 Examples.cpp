#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void draw() const = 0;

    // Non-virtual function
    void display() const {
        cout << "This is a shape." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    // Shape shape; // Error: Cannot instantiate an abstract class

    // Using polymorphism
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw();  // Output: Drawing a circle.
    shape2->draw();  // Output: Drawing a rectangle.

    // Clean up
    delete shape1;
    delete shape2;

    return 0;
}
