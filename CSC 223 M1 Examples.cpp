#include <iostream>
using namespace std;

// Define the interface
class Printable {
public:
    virtual void print() const = 0; // Pure virtual function
    virtual ~Printable() {}
};

// Implement the interface in a class
class Document : public Printable {
public:
    void print() const override {
        cout << "Printing Document..." << endl;
    }
};

// Implement the interface in another class
class Image : public Printable {
public:
    void print() const override {
        cout << "Printing Image..." << endl;
    }
};

int main() {
    Printable* doc = new Document();
    Printable* img = new Image();

    doc->print(); // Output: Printing Document...
    img->print(); // Output: Printing Image...

    delete doc;
    delete img;

    return 0;
}
