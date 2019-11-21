//
// Created by utec on 21/11/19.
//

#ifndef TRIANGULOS_AREA_H
#define TRIANGULOS_AREA_H

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
class Triangulo {
private:
    int b,h;
    float a;
public:
    Triangulo (int , int );
    Triangulo (float );
    Triangulo operator + (Triangulo E2);

    friend Triangulo operator + (Triangulo& E2);
    friend ostream& operator<<(ostream& o, Triangulo a);
};
Triangulo::Triangulo(int base, int altura) {
    this->b=base;
    this->h=altura;
    this->a=b*h/2;
}
Triangulo::Triangulo(float area) {
    this->a=area;
}
Triangulo Triangulo::operator+(Triangulo E2) {
    return  *(new Triangulo(a+E2.a));
}
ostream& operator<<(ostream &o, Triangulo e) {
    o << e.a;
    return o;
}


#endif //TRIANGULOS_AREA_H
