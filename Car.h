#pragma once
#include <iostream>
using namespace std;

class Car {
private:
    // Encapsulated data members
    string brand;
    int speed;

public:
    // Constructor to initialize data
    Car(string b = "model", int s = 0) : brand(b), speed(s) { };

    // Public getter methods (read access)
    string getBrand() const {
        return brand;
    }
    int getSpeed() const {
        return speed;
    }

    // Public setter methods (write access)
    void setBrand(string b) {
        brand = b;
    }
    void setSpeed(int s) {
        speed = s;
    }

    // Method to display car details
    void display() const {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};