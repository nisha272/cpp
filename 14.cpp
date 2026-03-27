#include <iostream>
using namespace std;
union Data {
    int intValue;
    float floatValue;
};

int main() {
    Data data;

    data.intValue = 10;
    cout << "Stored Integer Value: " << data.intValue << endl;

    data.floatValue = 3.14f;
    cout << "Stored Float Value: " << data.floatValue << endl;

    return 0;
}
