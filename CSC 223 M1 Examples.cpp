#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() const {
        cout << "Drawing a generic shape" << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    // Calls the derived class methods using base class pointers
    shape1->draw(); // Output: Drawing a circle
    shape2->draw(); // Output: Drawing a rectangle

    delete shape1;
    delete shape2;

    return 0;
}
