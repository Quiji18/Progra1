#include <iostream>
#include "ejerciciosGH.h"
using namespace std;
using namespace ejeGH;
int main(){
    float g;
    system("cls");
    cout<<"Programa que convierte grados a radianes..."<<endl;
    cout<<"Ingrese los grados(solo numeros)"<<endl;
    cin>>g;
    system("cls");
    cout<<"Los "<<g<<" grados a radianes es: "<<endl<<rad(g);

    return 0;
}