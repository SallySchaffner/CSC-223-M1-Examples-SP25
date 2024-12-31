#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
private:
    string brand;

public:
    // Constructor for Car
    Car(string b, int speed) : Vehicle(speed), brand(b) {}

    void displayCarDetails() const {
        cout << "Brand: " << brand << ", ";
        displaySpeed(); // Calling base class method
    }
};
