#include<iostream>
#include"ejerciciosGH.h"
using namespace std;
using namespace ejeGH;

int main(){
    int d, m, a;
    system("cls");
    cout<<"Programa que te indica si ya ha celebrado su cumpleagnos..."<<endl;
    cout<<"Ingrse su fecha de nacimiento..."<<endl;
    cout<<"Dia: ", cin>>d;
    cout<<"Mes: ", cin>>m;
    cout<<"Agno: ", cin>>a;
    
    if(d==5&&m==5){
        cout<<"Hoy es tu cumpleanos"<<endl;
    }else if(cumple(d,m)==true){
        cout<<endl<<"Ya celebraste tu cumpleagnos"<<endl;
    }else{
        cout<<endl<<"No has celebraste tu cumpleagnos"<<endl;
    }
    cout<<"El programa ha terinado..."<<endl;

    return 0;
}
