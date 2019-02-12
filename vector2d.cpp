#include "vector2d.h"
#include <math.h>

/*vector2D::vector2D(double x, double y)
{
    x_ = x; //ustawiam w konstruktorze wartosci
    y_ = y;
}*/


// lista inicjalizacyjna konstruktora:

vector2D::vector2D(double x, double y) : x_{x}, y_{y} //te klamry to wspolczesny jesyk c++ zamiast ()
{} //puste cialo fcji bo ta fcja juz nic nie musi robic bo wszystki jest w liscie inicjalizacyjnej powyzej
//w wielu przypadkach na liscie inicjalizacyjnej bedzie mozna umiescic pola klas
//lista wykonuje sie wczesniej niz cialo konstruktora !!!
// to ostatni etap zeby przypisac wartosci stale !!!
// w ciele konstruktora jest juz za pozno na inicjalizacje danych !!! stad tez jakby odkomentowac powyzszy kod to nie zadziala

double vector2D::length() const
{
     return sqrt (x_ * x_ + y_ * y_);
}

 vector2D operator +(const vector2D &v1, vector2D &v2)
 {}
