#include <iostream>
#include "car.h"
using namespace std;

ostream& operator <<(ostream& os,  Car& car) {
    cout << "Car info: (" << car.GetMake() << ", " << car.GetVin() << ", " << car.GetState() << ")" << endl;
    return os;
}

// Konstruktor bezparametrowy
Car::Car() {
    cout << "Konstruktor bezparametrowy samochodu" << endl;
};

// Konstruktor z l-referencjami
Car::Car(string const &make, int const &vin, state const &carAvailable): make(make), vin(vin), carAvailable(carAvailable) {
    cout << "Konstruktor z l-referencjami (" << make << ", " << vin << ", " << carAvailable << ")" << endl;
};

// Konstruktor z r-referencjami
Car::Car(string &&make, int &&vin, state &&carState): make(make), vin(vin), carAvailable(carAvailable) {
    cout << "Konstruktor z r-referencjami (" << make << ", " << vin << ", " << carAvailable << ")" << endl;
};

// Konstruktor kopiujacy
Car::Car(const Car& otherCar) : make(otherCar.make), vin(otherCar.vin), carAvailable(otherCar.carAvailable) {
    cout << "Konstruktor kopiujacy => (" << make << ", " << vin << ", " << carAvailable << ")" << endl; 
}     

// Konstruktor przenoszacy
Car::Car(Car&& otherCar) : make(otherCar.make), vin(otherCar.vin), carAvailable(otherCar.carAvailable) {
    cout << "Konstruktor przenoszący => (" << make << ", " << vin << ", " << carAvailable << ")" << endl; 
}

// Kopiujacy operator przypisania
Car& Car::operator=(const Car& right) {
    cout << "Kopiujacy operator przypisania" << endl;
    Car tmp(right);
    int newVin = right.GetVin() + 100;
    make = tmp.make;
    vin = newVin;
    carAvailable = carAvailable;

    return *this;
}

// Przenoszący operator przypisania
Car& Car::operator=(Car&& right) {
    cout << "Przenoszący operator przypisania" << endl; 
    make = move(right.make);
    vin = move(right.vin);
    carAvailable = move(right.carAvailable);
    return *this;
}

// Getters
string Car::GetMake() const {
    return make;
}

int Car::GetVin() const {
    return vin;
}

int Car::GetState() const {
    return carAvailable;
}

// Setters
void Car::SetMake(string const &make) {
    this->make = make;
};


void Car::SetVin(int const &vin) {
    this->vin = vin;
};

void Car::SetState(state const &state) {
    this->carAvailable = state;
};

void Car::SetState(state &&state) {
    this->carAvailable = move(state);
};


// Car::~Car() {
//     cout << "Destruktor samochodu (" << make << ", " << vin << ", " << carAvailable << ")" << endl;
// };

