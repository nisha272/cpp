#include <iostream>


using namespace std;

class Student {
  
   char name[50];
    int roll_number;
    float marks;

public:
  
    void inputDetails() {
        cout << "Enter Name: ";
      cin.getline(name, 50);  
        cout << "Enter Roll Number: ";
        cin >> roll_number;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void displayDetails() {
        cout << "\n Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}
