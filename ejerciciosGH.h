#include <math.h>
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
}