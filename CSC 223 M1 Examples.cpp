#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << add(3, 5) << endl;        // Works with integers
    cout << "Addition of doubles: " << add(3.5, 5.5) << endl;    // Works with doubles
    return 0;
}
