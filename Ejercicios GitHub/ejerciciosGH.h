#include <math.h>
#include <iostream>
using namespace std;
namespace ejeGH{
    float gen1(float a, float b, float c){
        float x1,x2,x0;
        x2 = (b*b)-(4*a*c);
        x1 = (-b)+sqrt(x2);
        x0 = x1/(2*a);
        return x0;
    }
    float gen2(float a, float b, float c){
        float x1,x2,x0;
        x2 = (b*b)-(4*a*c);
        x1 = (-b)-sqrt(x2);
        x0 = x1/(2*a);
        return x0;
    }
    float rad(float g){
        float r;
        r = g*(3.141592/180);
        return r;
    }
    void funtrig(float ang){
        float rad, sen, cose, tang, cot, sec, csc;
        rad =(ang*3.141592)/180;
        sen = sin(rad);
        cose = cos(rad);
        tang = tan(rad);
        cot = 1/tang;
        sec = 1/cose;
        csc = 1/sen;

        cout<<"Sen "<<ang<<" = "<<sen<<endl;
        cout<<"Cos "<<ang<<" = "<<cose<<endl;
        cout<<"Tan "<<ang<<" = "<<tang<<endl;
        cout<<"Cot "<<ang<<" = "<<cot<<endl;
        cout<<"Sec "<<ang<<" = "<<sec<<endl;
        cout<<"Csc "<<ang<<" = "<<csc<<endl;
    }

    bool cumple(int d, int m){
        int da = 5, ma = 5;
        bool cum = 0;

        if(m<=ma){
            if(d<da){
                cum = 1;
            }
        }
        return cum;
    }

}