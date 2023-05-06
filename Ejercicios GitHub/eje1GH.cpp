#include <iostream>
#include "ejerciciosGH.h"
using namespace std;
using namespace ejeGH;

int main(){
    float a, b, c;
    cout<<"Programa que resuelve una cuadratica con la formula general..."<<endl;
    cout<<"Ingrese los siguintes valores: "<<endl<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    system("cls");
    cout<<"El resultado de la ecuacion con a: "<<a<<" b: "<<b<<" c: "<<c<<": "<<endl<<"X1: "<<gen1(a,b,c)<<endl<<"X2: "<<gen2(a,b,c);
    return 0;
}