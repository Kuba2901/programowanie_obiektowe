#include "Kolo.h"
#include <iostream>
#include <tgmath.h>
#define PI 3.14

using namespace std;

Kolo::Kolo(double r): r(r) {
    // Zmiast r(r) moze byc SetR(r);
    cout << "Konstruktor kola o promieniu (" << r  << ")" << endl;
}

double Kolo::GetR() const {
    return r;
}

void Kolo:: SetR(double r) {
    this->r = r;
}

double Kolo::Pole()  {
    double pole = PI*r*r;

    cout << "Pole kola wynosi: " << pole << endl;
    return pole;
}

double Kolo::Obwod() {
    double obwod = 2*PI*r;

    cout << "Obwod kola wynosi: " << obwod << endl;

    return obwod;
}

void Kolo::Wypisz(ostream& out) const {
    
}

void Kolo::ZnajdzFigure(double pole)  {
    double r = sqrt(pole/PI);

    SetR(r);

}


Kolo::~Kolo() {
    cout << "Destruktor Kola o r = " << r << endl;
}