#pragma once
#include "FiguraPlaska.h"

using namespace std;

class Kolo: public FiguraPlaska {
    private:
        double r;

    protected:
        void Wypisz(ostream& out) const override; 

    public:
        Kolo(double r);

        double GetR() const;

        void SetR(double r);

        double Pole() override;
        double Obwod() override;
        void ZnajdzFigure(double pole) override;

        ~Kolo() override;

    private: 
};