#include "Prostokat.h"
#include <iostream>
#include <tgmath.h>

using namespace std;

Prostokat::Prostokat(double a, double b): a(a), b(b) {
    // Zmiast a(a) moze byc SetA(a) i analogicznie SetB(b);
    cout << "Konstruktor Prostokata (" << a << "," << b << ")" << endl;
}

double Prostokat::GetA() const {
    return a;
}

double Prostokat::GetB() const {
    return b;
}

void Prostokat::SetA(double a) {
    this->a = a;
}

void Prostokat::SetB(double b) {
    this->b = b;
}

double Prostokat::Obwod() {
    double obwod = 2*a+2*b;
    cout << "Obwod prostokata: " << obwod << endl;
    return obwod;
}

double Prostokat::Pole() {
    double pole = a*b;
    cout << "Pole prostokata: " << pole << endl;
    return pole;
}

void Prostokat::Wypisz(ostream& out) const {
    cout << "Prostokat o wymiarach: " << GetA() << "x" << GetB() << endl;
}

void Prostokat::ZnajdzFigure(double pole)  {
    double a = sqrt(pole);
    SetA(a);
    SetB(a);
}

Prostokat::~Prostokat() {
    cout << "Destruktor prostokata o wymiarach: " << GetA() << "x" << GetB() << endl;

}

