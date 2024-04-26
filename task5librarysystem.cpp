#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book
{
    string title;
    string author;
    string isbn;
    bool available;
};

struct Borrower
{
    string name;
    string id;
};

struct Transaction
{
    Book book;
    Borrower borrower;
    string checkoutDate;
    string returnDate;
};

void searchBooks(const vector<Book> &books, const string &keyword);
void checkoutBook(vector<Book> &books, const Book &book, const Borrower &borrower, const string &checkoutDate);
void returnBook(vector<Book> &books, const Book &book, const string &returnDate);
void calculateFine(const Transaction &transaction);

int main()
{
    vector<Book> books;

    cout << "===== Library Management System =====" << endl;
    cout << "1. Search Books" << endl;
    cout << "2. Checkout Book" << endl;
    cout << "3. Return Book" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        string keyword;
        cout << "Enter search keyword: ";
        cin >> keyword;
        searchBooks(books, keyword);
        break;
    }
    case 2:
    {

        break;
    }
    case 3:
    {

        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

void searchBooks(const vector<Book> &books, const string &keyword)
{
}

void checkoutBook(vector<Book> &books, const Book &book, const Borrower &borrower, const string &checkoutDate)
{
}

void returnBook(vector<Book> &books, const Book &book, const string &returnDate)
{
}

void calculateFine(const Transaction &transaction)
{
}
