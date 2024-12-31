#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    Motorcycle(bool sidecar, int speed) : Vehicle(speed), hasSidecar(sidecar) {}

    void displayMotorcycleDetails() const {
        cout << "Motorcycle, Sidecar: " << (hasSidecar ? "Yes" : "No") << ", ";
        displaySpeed(); // Calling base class method
    }
};

