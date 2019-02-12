#include <iostream>
#include "vector2d.h"

using namespace std;

int main()
{
    vector2D v1 (1,2), v2(3,4); //zeby wywolac konstruktor bez parametrow to musi byc bez nawiasu !!!
    vector2D v3 = v1 + v2;
    cout << "v1.x() = " << v1.x() <<" , v1.y() = " << v1.y() << endl;
    // wczesniej jak bylo np x_ to sie plul ze jest private, a teraz dzieki tej modyfikacji w vector2s.h daje nam
    // taka mozliwosc
    cout << "length of v1(1,2) = " << v1.length() << endl;
    cout << "v1 + v2 = " << v3.length() << endl;




    return 0;
}
