#include <stdio.h>

int main(){
    float b, h, n, a, c, areatotal = 0, fx, area, contador, base, x;    

    scanf ("%f %f %f %f", &a, &b, &n, &c);
    base = (b - a)/ n;
    x = base + a;
    contador = n;
    for(contador ; contador > 0 ; contador--){
        fx = x * x;
        area = base * fx;
        areatotal += area;
        x += base;
    }

    if(areatotal > c) printf("Maior");
    else if(areatotal == c) printf("Igual");
    else if(areatotal < c) printf("Menor");
    
}