
#include <stdio.h>
#include <math.h>

int main() {
  int A, B, n1, n2, n3, divisores, primozeca = 0, x;
  
  

  scanf("%d %d", &A, &B);
 

  for (A; A <= B; A++){
    n1 = A;
    do{
    divisores = 0;
    --n1;
    for (int contador = 2; contador <= sqrt(n1); contador++){
        if ( n1 % contador == 0) ++ divisores;
    }
    }
    while (divisores != 0 && n1 >= 3);
    if(divisores == 0){ 
    for (int contador = 2; contador <= sqrt(A); contador++){
        if ( A % contador == 0) ++ divisores;
    }
    }
    
    if(divisores == 0){
        n2 = A;
        do{
        divisores = 0;
        n2++;
        for (int contador = 2; contador <= sqrt(n2); contador++){
        if ( n2 % contador == 0) ++ divisores;
        }
        }
        while (divisores != 0);
        
        if ( (n1 + n2) / 2.00 == A) ++primozeca;
  }
}
printf("%d", primozeca);
 // Int main
}