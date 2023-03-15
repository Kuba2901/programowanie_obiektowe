#include "FiguraPlaska.h"

using namespace std;

void operator-(FiguraPlaska& figura1,  FiguraPlaska& figura2) {
    double pole1 = figura1.Pole();
    double pole2 = figura2.Pole();
    double pole3 = abs(pole1 - pole2);
    
    figura1.ZnajdzFigure(pole3);

}

FiguraPlaska::~FiguraPlaska() {

}