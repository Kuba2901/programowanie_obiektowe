#pragma once
#include <iostream>
using namespace std;

enum state {
    not_available = 0,
    available = 1
};

class Car {
    string make;
    int vin;

    // Stan wypozyczenia
    state carAvailable;

    protected:
        friend ostream& operator<<(ostream&,  Car &car);

    public:
        // Konstruktor bezparametrowy
        Car();

        // Konstruktor z l-referencjami
        Car(string const &make, int const &vin, state const &carAvailable);

        // Konstruktor z r-referencjami
        Car(string &&make, int &&vin, state &&carAvailable); // TODO: Use enum

        // Getery
        string GetMake() const;
        int GetVin() const;
        // state GetState() const; // TODO: Use enum
        int GetState() const;

        // Setery
        void SetMake(string const &make);
        void SetMake(string &&make);

        
        void SetVin(int const &vin);
        void SetVin(int &&vin);
        
        // TODO: Use enum
        void SetState(state const &carAvailable);
        void SetState(state &&carAvailable);

         // Konstruktor kopiujący
        Car(const Car& otherCar);

        // Konstruktor przenoszacy
        Car(Car&& otherCar);

        // Kopiujacy operator przepisania
        Car& operator=(const Car& right);

        // Przenoszący operator przypisania
        Car& operator=(Car&& right);
          
        // Destruktor
        // ~Car();

};

