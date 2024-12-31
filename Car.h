#pragma once
#include <iostream>
#include "Engine.h"
#include "Wheel.h"

using namespace std;

class Car {
private:
    string brand;
    Engine engine; // "Has-a" relationship
    Wheel wheel;   // "Has-a" relationship

public:
    Car(string b, int hp, int ws) : brand(b), engine(hp), wheel(ws) {}

    void displayDetails() const {
        cout << "Car Brand: " << brand << endl;
        engine.displaySpecs();
        wheel.displaySpecs();
    }
};

