#pragma once
#include <iostream>
#include <string>
using namespace std;

// Engine class
class Engine {
private:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}

    void displaySpecs() const {
        cout << "Engine Horsepower: " << horsepower << " HP" << endl;
    }
};

