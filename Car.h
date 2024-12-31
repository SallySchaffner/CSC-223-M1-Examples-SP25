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
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    // Public getter method (read access)
    string getBrand() const {
        return brand;
    }

    // Public setter method (write access)
    void setBrand(string b) {
        brand = b;
    }

    // Method to display car details
    void display() const {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};