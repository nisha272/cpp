#include <iostream>
using namespace std;
class B;
class A {
    int x;
public:
    A() {
        x = 15;
    }
    friend void show(A);
    friend class B;
};
void show(A obj) {
    cout << "Accessed by Friend Function: " << obj.x << endl;
}
class B {
public:
    void display(A obj) {
        cout << "Accessed by Friend Class: " << obj.x << endl;
    }
};
int main() {
    A a1;
    B b1;
    show(a1);
    b1.display(a1);
}