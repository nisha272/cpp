#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    // Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    // Copy constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    // Function to display book details
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Using default constructor
    Book b1;
    
    // Using parameterized constructor
    Book b2("The Alchemist", "Paulo Coelho", 299.99);
    
    // Using copy constructor
    Book b3(b2);

    cout << "Book 1 (Default Constructor):" << endl;
    b1.display();

    cout << "Book 2 (Parameterized Constructor):" << endl;
    b2.display();

    cout << "Book 3 (Copy Constructor):" << endl;
    b3.display();

    return 0;
}