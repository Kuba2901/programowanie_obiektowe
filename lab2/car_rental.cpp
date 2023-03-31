#include <iostream>
#include "car_rental.h"
#include "car.h"

using namespace std;

ostream& operator <<(ostream& os,  AutoRental& autoRental) {
    for (size_t i = 0; i < autoRental.size; i++)
    {
        cout << autoRental.carArray[i] << endl;
    }
    
   return os;
}

// Konstruktor bezparametrowy
AutoRental::AutoRental() {
    cout << "Konstruktor bezparametrowy biblioteki" << endl;
};

// Konstruktor bez elementow
AutoRental::AutoRental(size_t size): size(size), carArray(new Car[size]) {
    cout << "Konstruktor bez elementow" << endl;
};

// Konstruktor z inicjalizacją
AutoRental::AutoRental(initializer_list<Car> initList) : size{initList.size()}, carArray{new Car[initList.size()]} {
    cout << "AutoRental(initializer_list)" << endl << endl; 
    size_t i = 0;
    for(Car v : initList) {
        // carArray[i] = v;
        swap(carArray[i], v);
        i++; 
    }
}

// Konstruktor kopiujacy
AutoRental::AutoRental(const AutoRental& otherRental) : carArray(otherRental.carArray), size(otherRental.size) {
    cout << "Konstruktor kopiujacy wypozyczalni" << endl; 
}     

// Konstruktor przenoszacy
AutoRental::AutoRental(AutoRental&& otherRental) : carArray(otherRental.carArray), size(otherRental.size) {
    cout << "Konstruktor przenoszacy wypozyczalni" << endl; 
}
// Kopiujacy operator przypisania
AutoRental& AutoRental::operator=(const AutoRental& right) {
    AutoRental tmp(right);
    swap(carArray, tmp.carArray);
    swap(size, tmp.size);

    return *this;
}

// Przenoszący operator przypisania
AutoRental& AutoRental::operator=(AutoRental&& right){
    cout << "Przenoszący operator przypisania wypozyczalni" << endl; 
    size = move(right.size);
    carArray = move(right.carArray);
    return *this;
}

Car& AutoRental::operator[](size_t index) {
    return carArray[index];
};

const Car& AutoRental::operator[](size_t index) const {
    return carArray[index];
}; 


AutoRental::~AutoRental() {
    cout << "Destruktor wypozyczalni" << endl;
    // Nie dziala (pointer nie wskazuje na nic)
    
    // if (array != nullptr) {
    //     delete[] array;
    // }
}