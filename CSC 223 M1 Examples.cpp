#include "Car.h"
#include "Motorcycle.h"

int main() {
    Car car1("Toyota", 180);
    Motorcycle bike1(false, 200);

    car1.displayCarDetails();      // Output: Brand: Toyota, Max Speed: 180 km/h
    bike1.displayMotorcycleDetails(); // Output: Motorcycle, Sidecar: No, Max Speed: 200 km/h

    return 0;
}
