#pragma once
#include "book.h"
#include <initializer_list>
using namespace std;

class Library {
    Book* array;
    size_t size;

    private:
        friend ostream& operator<<(ostream&,  Library &book);
    
    public: 
        // Konstruktor bezparametrowy
        Library();

        // Konstruktor bez elementow
        Library(size_t size);

        // Uruchomienie konstruktora z dowolna liczba elementow "book"
        Library(initializer_list<Book> list); 
        
        // Konstruktor kopiujący
        Library(const Library& orig); 
        
        // Konstruktor przenoszacy
        Library(Library&& orig);
        
        // Kopiujacy operator przepisania
        Library& operator=(const Library& right); 
        
        // Przenoszący operator przypisania
        Library& operator=(Library&& right);
        
        Book& operator[](size_t index);

        const Book& operator[](size_t index) const; 
        
        ~Library();
};