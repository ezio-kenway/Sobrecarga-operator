#include <iostream>
#include "Area.h"
using namespace std;

int main(){
    int a1,a2;
    Triangulo t1(4,5),t2 (3,6);
    Triangulo t3=t1+t2;
    //Imprime el area de t3
    cout<<"La suma de areas es: "<<t3;
}