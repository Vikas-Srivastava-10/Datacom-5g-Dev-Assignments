/*
Purpose - Book Inventory (Create + Read)
			Maintain a binary file of books.
		Fields:
			Book ID
			Title
			Price
		Operations:
			Add book
			List all books
 *  Date: 05/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <fstream>
using namespace std;

class Book {
public:
    int bookId;
    char title[30];
    float price;

    void input() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << bookId << "\t" << title << "\t" << price << endl;
    }
};

void addBook() {
    Book b;
    ofstream file("books.dat", ios::binary | ios::app);

    b.input();
    file.write((char*)&b, sizeof(b));

    file.close();
    cout << "Book added successfully.\n";
}

void listBooks() {
    Book b;
    ifstream file("books.dat", ios::binary);

    cout << "\nBookID\tTitle\tPrice\n";
    cout << "--------------------------\n";

    while (file.read((char*)&b, sizeof(b))) {
        b.display();
    }

    file.close();
}

int main() {
    int choice;

    do {
        cout << "\n--- Book Inventory Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. List All Books\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addBook(); break;
        case 2: listBooks(); break;
        case 3: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice!\n";
        }
    } while (choice != 3);

    return 0;
}
