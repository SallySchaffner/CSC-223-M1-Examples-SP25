#include <iostream>
#include "Car.h"
using namespace std;


int main() {
    Car myCar("Toyota", 120);

    // Accessing data using public methods
    cout << "Initial Brand: " << myCar.getBrand() << endl;
    myCar.setBrand("Honda");
    myCar.display();

    return 0;
}
