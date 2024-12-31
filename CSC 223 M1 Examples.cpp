#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() const { // Virtual function
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

    shape1->draw();  // Calls Circle::draw (runtime decision)
    shape2->draw();  // Calls Rectangle::draw (runtime decision)

    delete shape1;
    delete shape2;

    return 0;
}
