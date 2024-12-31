#include <iostream>
using namespace std;

class CompileTimeExample {
public:
    // Function overloading (compile-time binding)
    void display(int x) {
        cout << "Integer: " << x << endl;
    }

    void display(double x) {
        cout << "Double: " << x << endl;
    }
};

int main() {
    CompileTimeExample obj;

    obj.display(5);      // Calls the version with int parameter
    obj.display(5.5);    // Calls the version with double parameter

    return 0;
}
