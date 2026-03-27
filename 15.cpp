#include <iostream>
using namespace std;

int main() {
    int var = 42;
    
    int* ptr;

    ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Memory address of var: " << &var << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    cout << "Value pointed to by ptr: " << *ptr << endl;

    *ptr = 100;
    cout << "New value of var: " << var << endl;

    return 0;
}
