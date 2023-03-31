#include <initializer_list>
#include <iostream>
using namespace std;

class Vector {
     double* array;
     size_t size;
 public:
    //Parametr typu std::initializer_list pozwoli na uruchomienie 
    //konstruktora z dowolną liczbą wystąpień liczb typu double. 
    //Będzie to wyglądało jak inicjalizacja tablicy. Przykład: 
    //Vector v1({1,2,3,4,5,5.5});
    //lub
    //Vector v1{1,2,3,4,5,5.5};
    //lub
    //Vector v1 = {1,2,3,4,5,5.5};
    //Jest to cecha C++11 

    Vector(initializer_list<double> initList)
        : size{initList.size()}, array{new double[initList.size()]} {
        size_t i = 0;

        for(double v : initList) {
            array[i] = v;
            i++; 
        }
    }
    size_t GetSize() const {
        return size;
    }

    const double& operator[](size_t i) const {
        return array[i];
    } 

    ~Vector() {
        if(array != nullptr)
            delete[] array;
    } 

};


ostream& operator<<(ostream& ostr, const Vector& v){ ostr << "Vector{";
    for(size_t i = 0; i < v.GetSize(); i++) {
        if(i > 0)
            ostr << ',';
            ostr << v[i];
        }

        ostr << '}';
        return ostr;
    }


int main(int argc, char** argv) {
    Vector v1 = {1,2,3,4,5,5.5};
    std::cout << "v1: " << v1 << std::endl; return 0;
}
