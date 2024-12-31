#pragma once
#include <iostream>

using namespace std;

class Wheel {
private:
    int size;

public:
    Wheel(int s) : size(s) {}

    void displaySpecs() const {
        cout << "Wheel Size: " << size << " inches" << endl;
    }
};


