#include <iostream>
#include "book.h"
using namespace std;

ostream& operator <<(ostream& os,  Book& book) {
    cout << book.GetTitle() << "(" << book.GetAuthor() << ")" << endl;
    return os;
}

// Konstruktor bezparametrowy
Book::Book() {
    cout << "Konstruktor bezparametrowy" << endl;
};

// Konstruktor z l-referencjami
Book::Book(string const &author, string const &title): author{author}, title{title} {
    cout << "Konstruktor z l-referencjami (" << author << "-" << title << ")" << endl;
};

// Konstruktor z r-referencjami
Book::Book(string &&author, string &&title): author(move(author)), title(move(title)) {
    cout << "Konstruktor z r-referencjami (" << author << "-" << title << ")" << endl;
};

// Konstruktor kopiujacy
Book::Book(const Book& otherBook) : title(otherBook.title), author(otherBook.author) {
    cout << "Konstruktor kopiujacy" << endl; 
}     

// Konstruktor przenoszacy
Book::Book(Book&& otherBook) : title(move(otherBook.title)), author(move(otherBook.author)) {
    cout << "Konstruktor przenoszacy" << endl; 
}

// Kopiujacy operator przypisania
Book& Book::operator=(const Book& right) {
    Book tmp(right);
    swap(title, tmp.title);
    swap(author, tmp.author);
        
    return *this;
}

// Przenoszący operator przypisania
Book& Book::operator=(Book&& right) {
    cout << "Przenoszący operator przypisania" << endl; 
    title = move(right.title);
    author = move(right.author);
    return *this;
}


// Title getter and setters
string Book::GetTitle() const {
    return title;
}
void Book::SetTitle(string const &title) {
    this->title = title;
};

void Book::SetTitle(string &&title) {
    this->title = move(title);
};


// Author getter and setters
string Book::GetAuthor() const {
    return author;
}
void Book::SetAuthor(string const &author) {
    this->author = author;
};

void Book::SetAuthor(string &&author) {
    this->author = move(author);
};


Book::~Book() {
    cout << "Destruktor ksiazki (" << title << " " << author << ")" << endl;
}

