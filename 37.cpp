#include <iostream>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i =0; i <= n; i++) {
            for(int j = n; j>i; j--) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    Solution s;      
    s.pattern1(n);   

    return 0;
}