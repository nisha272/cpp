#include <iostream>
using namespace std;
class Box {
private:
    float length;
    float width;
    float height;
public:
    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;}
    friend void Volume(Box b);};
void Volume(Box b) {
    float volume = b.length * b.width * b.height;
    cout << "Volume of the box: " << volume << endl;}
int main() {
    Box b1(8.0, 5.0, 4.0);
    Volume(b1);
    return 0;}