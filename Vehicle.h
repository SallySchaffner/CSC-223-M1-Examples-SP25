#pragma once
#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    int maxSpeed;

public:
    Vehicle(int speed) : maxSpeed(speed) {}

    void displaySpeed() const {
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
    }
};

