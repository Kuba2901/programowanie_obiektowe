#pragma once
#include <iostream>
using namespace std;

class Book {
    string author, title;

    protected:
        friend ostream& operator<<(ostream&,  Book &book);

    public:
        // Konstruktor bezparametrowy
        Book();

        // Konstruktor z l-referencjami
        Book(string const &author, string const &title);

        // Konstruktor z r-referencjami
        Book(string &&author, string &&title);

        // Getery
        string GetTitle() const;
        void SetTitle(string const &title);
        void SetTitle(string &&title);
        
        // Setery
        string GetAuthor() const;
        void SetAuthor(string const &author);
        void SetAuthor(string &&author);

         // Konstruktor kopiujący
        Book(const Book& otherBook);

        // Konstruktor przenoszacy
        Book(Book&& otherBook);

        // Kopiujacy operator przepisania
        Book& operator=(const Book& right);

        // Przenoszący operator przypisania
        Book& operator=(Book&& right);
          
        // Destruktor
        ~Book();

};

