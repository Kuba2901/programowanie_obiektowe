#pragma once
#include "FiguraPlaska.h"

using namespace std;

class Prostokat: public FiguraPlaska {
    private:
        double a,b;

    protected:
        void Wypisz(ostream& out) const override;

    public:
        Prostokat(double a, double b);

        double GetA() const;

        void SetA(double a);

        double GetB() const;

        void SetB(double b);

        double Pole() override;
        double Obwod() override;

        void ZnajdzFigure(double pole) override;

        ~Prostokat() override;
};