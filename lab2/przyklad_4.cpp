// #include <initializer_list>
// #include <iostream>
// using namespace std;

// class Vector {
//      double* array;
//      size_t size;
//  public:
//     //Parametr typu initializer_list pozwoli na uruchomienie 
//     //konstruktora z dowolną liczbą wystąpień liczb typu double. 
//     //Będzie to wyglądało jak inicjalizacja tablicy. Przykład: 
//     //Vector v1({1,2,3,4,5,5.5});
//     //lub
//     //Vector v1{1,2,3,4,5,5.5};
//     //lub
//     //Vector v1 = {1,2,3,4,5,5.5};
//     //Jest to cecha C++11 

//     Vector(initializer_list<double> initList)
//         : size{initList.size()}, array{new double[initList.size()]} {
//         size_t i = 0;
        
//         for(double v : initList) {
//             array[i] = v;
//             i++; 
//         }
//     }
//     size_t GetSize() const {
//         return size;
//     }

//     const double& operator[](size_t i) const {
//         return array[i];
//     }

//     Vector podzielPrzez2(const Vector& arg) {
//         cout << "podzielPrzez2(const Vector&)" << endl;
//         Vector result = arg;
        
//         for(size_t i = 0; i < result.GetSize(); i++) {
//             result[i] = result[i]/2;
//         }
        
//         return result;
// }
// Vector podzielPrzez2(Vector&& arg) {
// cout << "podzielPrzez2(Vector&&)" << endl; /*
// * Mimo iż arg jest R-referencją, należy zastosować move,
// * aby wykorzystać jej właściwości. Bez tego zostanie wywołany
// * konstruktor kopiujący. Jest to cecha języka wymuszająca na
// * programiście jawne określenie miejsca w którym zostają użyte * specjalne właściwości R-referencji.
// */
//     Vector result = move(arg);
// for(size_t i = 0; i < result.GetSize(); i++) {
//         result[i] = result[i]/2;
//     }
//     return result;
// } 

//     ~Vector() {
//         if(array != nullptr)
//             delete[] array;
//     } 

// };


// int main() {
//     Vector v1 = {1,2,3};
//     Vector v2 = podzielPrzez2(v1);
// Vector v3 = podzielPrzez2(Vector{6,5,4});
// Vector v4 = {10,9,8};
// Vector v5 = podzielPrzez2(move(v4));
// cout << "v1: " << v1 << endl; cout << "v2: " << v2 << endl; cout << "v3: " << v3 << endl; cout << "v4: " << v4 << endl; cout << "v5: " << v5 << endl;
// }