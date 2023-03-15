#pragma once
#include <iostream>

using namespace std;



class FiguraPlaska {
    protected:
        virtual void Wypisz(ostream& out) const = 0;
        friend void operator-(FiguraPlaska& figura1, FiguraPlaska& figura2);

    public:
        virtual void ZnajdzFigure(double pole) = 0;
        virtual double Pole() = 0;
        virtual double Obwod() = 0;

        virtual ~FiguraPlaska();
        
};

