#include <iostream>
using namespace std;

class Car {
private:
    string car_model;
    int engine_number;

public:
    Car(string model, int engine) {
        car_model = model;
        engine_number = engine;
    }

    // Declare Garage as a friend class
    friend class Garage;
};

class Garage {
public:
    void showCarDetails(Car c) {
        // Accessing private members of Car
        cout << "Car Model: " << c.car_model << endl;
        cout << "Engine Number: " << c.engine_number << endl;
    }
};

int main() {
    Car c1("Toyota Corolla", 12345);

    Garage g;
    g.showCarDetails(c1);

    return 0;
}