#include <iostream>
using namespace std;

class Printer {
public:
    void print(int x) {
        cout << "Printing integer: " << x << endl;
    }

    void print(double x) {
        cout << "Printing double: " << x << endl;
    }

    void print(const string& x) {
        cout << "Printing string: " << x << endl;
    }
};

int main() {
    Printer p;
    p.print(42);            // Calls the integer version
    p.print(3.14);          // Calls the double version
    p.print("Hello C++");   // Calls the string version

    return 0;
}
