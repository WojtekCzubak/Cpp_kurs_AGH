#ifndef VECTOR2D_H
#define VECTOR2D_H


class vector2D //to jest deklaracja klasy
{
public:
    //vector2D(double x=0, double y=0); //domniemane wartosci funkcji
    //vector2D(double = 0, double = 0);
    vector2D(double, double);
    //vector2D(double x, double y) : x_{x}, y_{y} {} // to by bylo inline
    double x() const { return x_;}
    double y() const { return y_;} //const oznacza ze fcja nie zmienia stanu obiektu
    double length () const;

private:
    const double x_ = 0;
    const double y_ = 0; //to sa wspolrzedne wektora, przypisalismy im 0 bo wczesniej kompilator przypisywal losowe wartosci
};

// zdefiniujmy sobie plusa tzn tworzymy algebre dla wektorow - plus musi byc zawsze dwuargumentowy
vector2D operator +(const vector2D &v1, vector2D &v2);

#endif // VECTOR2D_H

//WARTOSCI DOMYSLE WPISUJE SIE W DEKL
