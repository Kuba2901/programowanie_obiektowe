#pragma once
#include "car.h"
#include <initializer_list>
using namespace std;

class AutoRental {
    Car* carArray;
    size_t size;

    private:
        friend ostream& operator<<(ostream&,  AutoRental &Car);
    
    public: 
        // Konstruktor bezparametrowy
        AutoRental();

        // Konstruktor bez elementow
        AutoRental(size_t size);

        // Uruchomienie konstruktora z dowolna liczba elementow "Car"
        AutoRental(initializer_list<Car> list); 
        
        // Konstruktor kopiujący
        AutoRental(const AutoRental& orig); 
        
        // Konstruktor przenoszacy
        AutoRental(AutoRental&& orig);
        
        // Kopiujacy operator przepisania
        AutoRental& operator=(const AutoRental& right); 
        
        // Przenoszący operator przypisania
        AutoRental& operator=(AutoRental&& right);
        
        Car& operator[](size_t index);

        const Car& operator[](size_t index) const; 
        
        ~AutoRental();
};