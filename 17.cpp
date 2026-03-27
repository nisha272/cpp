#include <iostream>

using namespace std;

int main() {

    int *ptr;

    ptr = new int(10);
    cout << *ptr << endl;

    cout << ptr;
    return 0;
}