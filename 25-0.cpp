#include <iostream> 

using namespace std; 

class Book { 

private: string title;string author; float price; 

public: Book() {title = "abc";author = "xyz"; price = 500.0;} 

    Book(string t, string a, float p) {title = t; author = a; price = p;} 

    Book(const Book &b) {title = b.title;   author = b.author;   price = b.price;} 

    void display() { 

      cout << "Title: " << title << endl;  cout << "Author: " << author << endl;} };

int main() { 

    Book b1;  Book b2("The c++", "Nisha", 299.99); 

    Book b3(b2);  cout << "Book 1 (Default Constructor):" << endl; 

    b1.display(); cout << "Book 2 (Parameterized Constructor):" << endl; 

    b2.display();  cout << "Book 3 (Copy Constructor):" << endl; 

    b3.display(); 

    return 0; 

}