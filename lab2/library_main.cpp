#include <iostream>
#include "library.h"
using namespace std;

int main() {
    Library e;
    cout << "e: " << e << endl; //3-5 książek
    Library l1 = {{"<?>", "<?>"}, {"<?>", "<?>"},
    {"<?>", "<?>"}};

    cout << "l1: "<< l1 << endl; 
    Library l2(2);
    cout << "l2: "<< l2 << endl; 
    l2[0] = {"<?>", "<?>"}; 
    l2[1] = {"<?>", "<?>"};
    cout << "l2: "<< l2 << endl;
    e = move(l2);
    cout << "e: " << e << " l2: "<< l2 << endl; 
    l1[0] = move(e[1]);
    cout << "l1: " << l1 << " e: "<< e << endl;

    return 0;
}