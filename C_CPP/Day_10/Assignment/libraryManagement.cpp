/*
Purpose -  Library Management System
			Create a binary file–based library system.
		Fields:
			Book ID
			Book name
			Author
			Availability status
		Operations:
			Add book
			Issue book
			Return book
			Delete book record
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
    char name[30];
    char author[30];
    bool isAvailable;

    void input() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cout << "Enter Book Name: ";
        cin >> name;
        cout << "Enter Author Name: ";
        cin >> author;
        isAvailable = true;
    }

    void display() {
        cout << bookId << "\t" << name << "\t" << author << "\t";
        if (isAvailable)
            cout << "Available\n";
        else
            cout << "Issued\n";
    }
};

// Add book
void addBook() {
    Book b;
    ofstream file("library.dat", ios::binary | ios::app);

    b.input();
    file.write((char*)&b, sizeof(b));

    file.close();
    cout << "Book added successfully.\n";
}

// Display all books
void displayBooks() {
    Book b;
    ifstream file("library.dat", ios::binary);

    cout << "\nID\tName\tAuthor\tStatus\n";
    cout << "----------------------------------\n";

    while (file.read((char*)&b, sizeof(b))) {
        b.display();
    }

    file.close();
}

// Issue book
void issueBook() {
    Book b;
    int id;
    bool found = false;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    cout << "Enter Book ID to issue: ";
    cin >> id;

    while (file.read((char*)&b, sizeof(b))) {
        if (b.bookId == id && b.isAvailable) {
            b.isAvailable = false;
            file.seekp(-sizeof(b), ios::cur);
            file.write((char*)&b, sizeof(b));
            found = true;
            cout << "Book issued successfully.\n";
            break;
        }
    }

    if (!found)
        cout << "Book not found or already issued.\n";

    file.close();
}

// Return book
void returnBook() {
    Book b;
    int id;
    bool found = false;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    cout << "Enter Book ID to return: ";
    cin >> id;

    while (file.read((char*)&b, sizeof(b))) {
        if (b.bookId == id && !b.isAvailable) {
            b.isAvailable = true;
            file.seekp(-sizeof(b), ios::cur);
            file.write((char*)&b, sizeof(b));
            found = true;
            cout << "Book returned successfully.\n";
            break;
        }
    }

    if (!found)
        cout << "Book not found or already available.\n";

    file.close();
}

// Delete book
void deleteBook() {
    Book b;
    int id;
    bool found = false;

    ifstream file("library.dat", ios::binary);
    ofstream temp("temp.dat", ios::binary);

    cout << "Enter Book ID to delete: ";
    cin >> id;

    while (file.read((char*)&b, sizeof(b))) {
        if (b.bookId != id) {
            temp.write((char*)&b, sizeof(b));
        } else {
            found = true;
        }
    }

    file.close();
    temp.close();

    remove("library.dat");
    rename("temp.dat", "library.dat");

    if (found)
        cout << "Book deleted successfully.\n";
    else
        cout << "Book not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addBook(); break;
        case 2: displayBooks(); break;
        case 3: issueBook(); break;
        case 4: returnBook(); break;
        case 5: deleteBook(); break;
        case 6: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
