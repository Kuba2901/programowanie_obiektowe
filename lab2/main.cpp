// #include <iostream>
// using namespace std;


// class Vektor3d {
//     double array[3]; //pole z tablicą liczb

//     public:
//         Vektor3d (double x1,double x2,double x3){ 
//             array[0] = x1;
//             array[1] = x2;
//             array[2] = x3;
//             cout << "Contructor" << endl;
//         }

//         const double& operator[](size_t i) const {
//             return array[i];
//         }
//     };

// ostream& operator<<(ostream& ostr, const Vektor3d& v) {
//     ostr << "Vector3d{"; for(size_t i = 0; i < 3; i++) {
//         if(i > 0)
//             ostr << ',';
//             ostr << v[i];
//         }
//     ostr << ')';
    
//     return ostr;
// };



// int main(){Vektor3d v1{1,2,3}; //utworzenie obiektu
//     std::cout << sizeof v1 << std::endl;
//     Vektor3d v2{4,5,6}; //utworzenie obiektu
//     Vektor3d v1Kopia1{v1}; //utworzenie obiektu - konstruktor kopiujący v1Kopia1
//     Vektor3d v1Kopia2 = v1; //utworzenie obiektu - konstruktor kopiującyv1Kopia2

//     cout << "v1: " << v1 << std::endl; // Wypisanie v1 std::cout << "v2: " << v2 << std::endl; // Wypisanie v2 v1 = v2; //przypisanie wartości
    


//     cout << "v1: " << v1 << endl; // Wypisanie v1
//     cout << "v1Kopia1: " << v1Kopia1 << endl; // Wypisanie
//     cout << "v1Kopia2: " << v1Kopia2 << endl; // Wypisanie
    
//     return 0;
    
// }