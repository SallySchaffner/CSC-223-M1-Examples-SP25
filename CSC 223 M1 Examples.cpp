#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T content;

public:
    Box(T value) : content(value) {}

    void display() const {
        cout << "Content: " << content << endl;
    }
};

int main() {
    Box<int> intBox(42);
    Box<string> stringBox("Hello Templates");

    intBox.display();       // Output: Content: 42
    stringBox.display();    // Output: Content: Hello Templates

    return 0;
}
