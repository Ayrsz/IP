#include <stdio.h>

int resto_divisao(int p, int q){
    return (p + q)  % 2;
}

void calcular_media (int *A, int *B){
    int temp = resto_divisao(*A, *B);
    *A = ((*A) + (*B)) / 2;
    *B =  temp;
}



int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    
    if(a < b){
        calcular_media(&a, &b);

    }
    else {
        calcular_media(&b, &a);
        
    }
    printf("A = %d\nB = %d", a, b);
}