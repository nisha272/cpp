#include <iostream>
using namespace std;
class Base {
public:
    void show() {
        cout << "Show with no arguments" << endl;}
    void show(int x) {
        cout << "Show with int: " << x << endl;}
    virtual void display() {
        cout << "Display from Base class" << endl;}};
class Derived : public Base {
public:
    void display() override {
        cout << "Display from Derived class" << endl;}};
int main() {
    Base b;
    b.show();
    b.show(50);
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->display(); 
    return 0;}