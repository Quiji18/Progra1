#include <iostream>
#include "ejerciciosGH.h"
using namespace std;
using namespace ejeGH;

int main(){
    float ang;
    system("cls");
    cout<<"Programa que calcula las funciones trigonometricas de un angulo..."<<endl;
    cout<<"Ingrese el algulo que desea calcular..."<<endl;
    cin>>ang;
    system("cls");
    cout<<"Resultados: "<<endl;
    funtrig(ang);
    return 0;
}