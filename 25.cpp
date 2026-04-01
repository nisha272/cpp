#include <iostream> 

using namespace std; 

class Vehicle { 

public: 

    string brand; 

    int year; 

    Vehicle(string b, int y) { 

        brand = b; 

        year = y;}}; 

class Car : virtual public Vehicle { 

public: 

    Car(string b, int y) : Vehicle(b, y) {}}; 

class Bike : virtual public Vehicle { 

public: 

    Bike(string b, int y) : Vehicle(b, y) {}}; 

class ElectricVehicle : public Car, public Bike { 

public: 

    ElectricVehicle(string b, int y) 

        : Vehicle(b, y), Car(b, y), Bike(b, y) {} 

    void display() { 

        cout << "Brand: " << brand << endl; 

        cout << "Year: " << year << endl;}}; 

int main() { 

    ElectricVehicle ev("tesla", 2026); 

    ev.display(); 

    return 0;} 