#include <iostream>
#include "library.h"
#include "book.h"

using namespace std;

ostream& operator <<(ostream& os,  Library& library) {
    cout << "Wypisanie biblioteki: " << endl;
    return os;
}

// Konstruktor bezparametrowy
Library::Library() {
    cout << "Konstruktor bezparametrowy biblioteki" << endl;
};

// Konstruktor bez elementow
Library::Library(size_t size): size(size), array(new Book[size]) {
    cout << "Konstruktor bez elementow" << endl;
};

// Konstruktor z inicjalizacją
Library::Library(initializer_list<Book> initList) : size{initList.size()}, array{new Book[initList.size()]} {
    cout << "Library(initializer_list)" << endl; 
    size_t i = 0;
    for(Book v : initList) {
        array[i] = v;
        i++; 
    }
}

// Konstruktor kopiujacy
Library::Library(const Library& otherBook) : array(otherBook.array), size(otherBook.size) {
    cout << "Konstruktor kopiujacy biblioteki" << endl; 
}     

// Konstruktor przenoszacy
Library::Library(Library&& otherBook) : array(move(otherBook.array)), size(move(otherBook.size)) {
    cout << "Konstruktor przenoszacy biblioteki" << endl; 
}
// Kopiujacy operator przypisania
Library& Library::operator=(const Library& right) {
    Library tmp(right);
    swap(array, tmp.array);
    swap(size, tmp.size);

    return *this;
}

// Przenoszący operator przypisania
Library& Library::operator=(Library&& right) {
    cout << "Przenoszący operator przypisania" << endl; 
    size = move(right.size);
    array = move(right.array);
    return *this;
}

Book& Library::operator[](size_t index) {
    return array[index];
};

const Book& Library::operator[](size_t index) const {
    return array[index];
}; 


Library::~Library() {
    cout << "Destruktor biblioteki" << endl;
    // if (array != nullptr) {
    //     delete[] array;
    // }
}