#include <iostream>
#include "book.h"
using namespace std;

int main() {
    string a="Dwie biale kreski", t="Pierdolic niebieskich"; 
    
    Book e;
    cout << "e: "<< e << endl; 
    Book b1 = {a, t};
    cout << "b1: "<< b1 << endl;
    Book b2 = {"<?>","<?>"};
    cout << "b2: "<< b2 << endl;
    Book b3 = b1; 
    cout<<"b3:"<<b3<<"b1:"<<b1<< endl;
    e = move(b2); 
    cout<<"e:"<<e<<"b2:"<<b2<< endl; 
    e.SetAuthor("<?>");
    cout << "e: "<< e << endl; 
    e.SetTitle("<?>");
    cout << "e: "<< e << endl;

    return 0;
}