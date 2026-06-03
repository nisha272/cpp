#include <iostream>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i =1; i <= n; i++) {
            for(int j = 1; j<=i; j++) {
                cout << i<<"";
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