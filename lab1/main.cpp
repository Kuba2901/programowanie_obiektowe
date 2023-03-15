#pragma once
#include <iostream>
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"

using namespace std;

void zadanie2(Prostokat* pP, Trojkat* pT, Kolo* pK);
void zadanie1(Prostokat prostokat, Trojkat trojkat, Kolo kolo);
void printName(string name);
void printName(string firstName, string lastName);
void zadanie3();

int main() {
    // // Deklaracje zmiennych lokalnych
    Prostokat prostokat = Prostokat(10.0, 20.0);
    Trojkat trojkat = Trojkat(11, 20, 30);
    Kolo kolo = Kolo(20);

    kolo - prostokat;

    // // Deklaracje przez wskazniki
    // Prostokat* pP = &prostokat;
    // Trojkat* pT = &trojkat;
    // Kolo* pK = &kolo;

    // // Zadanie 1
    // zadanie1(prostokat, trojkat, kolo);

    // // TODO: metoda wypisz

    // // Zadanie 2
    // zadanie2(pP, pT, pK);
     
    // // Zadanie 3
    // zadanie3();




    return 0;
}

void zadanie1(Prostokat prostokat, Trojkat trojkat, Kolo kolo) {
    // Konstruktory wypisuja sie przy deklaracji zmiennych lokalnych

    // Metody prostokata (z wypisywaniem do couta, ale takze zwracaniem wartosci)
    prostokat.Pole();
    prostokat.Obwod();
    
    // Metody trojkata (z wypisywaniem do couta, ale takze zwracaniem wartosci)
    trojkat.Pole();
    trojkat.Obwod();
    
    // Metody kola (z wypisywaniem do couta, ale takze zwracaniem wartosci)
    kolo.Pole();
    kolo.Obwod();
    
}


void zadanie2(Prostokat* pP, Trojkat* pT, Kolo* pK) {
    FiguraPlaska* figury[] = {
        pP, pT, pK
    };

    for (int i = 0; i < 3; i++)
    {
        figury[i]->Obwod();
    }
    
}

void zadanie3() {
    // Overloading (wybieranie funkcji do ktorej bardziej pasuja argumenty)
    printName("kuba");
    printName("Kuba", "Nenczak");
}

void printName(string name) {
    cout << "Name: " << name << endl;
}

void printName(string firstName, string lastName) {
    cout << "First name: " << firstName << endl << "last name: " << lastName << endl;
}