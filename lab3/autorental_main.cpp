#include <iostream>
#include "car_rental.h"
using namespace std;

int main() {
    Car car1{"w", 2, available};
    Car car2{"www", 2, not_available};
    car2 = car1;
    cout << car1 << endl;
    cout << car2 << endl;

    AutoRental wypozyczalnia{{"wypozyczalnia1", 1031, available}, car2};
    AutoRental wyp2 = wypozyczalnia;

    cout << wypozyczalnia<< endl;
    cout << wyp2<< endl;
    return 0;
}