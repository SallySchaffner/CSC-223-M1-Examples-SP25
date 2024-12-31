#include <iostream>
#include "Car.h"
using namespace std;


int main() {
    // Create objects (instances of the Car class)
    Car car1; // Default constructor
    Car car2("Toyota", 120);  // Constructor with parameters

    // Set attributes for car1
    car1.setBrand("Honda");
    car1.setSpeed(150);

    // Use the objects
    car1.display(); // Output: Brand: Toyota, Speed: 120 km/h
    car2.display(); // Output: Brand: Honda, Speed: 150 km/h

    return 0;
}

