#include <stdio.h>

int main(){
    int doces, pok1, pok2, pok3, contador;
    contador = 0;
    
    scanf("%i %i %i %i", &doces, &pok1, &pok2, &pok3);
    
    if ( doces >= 0 && doces <=1000 && pok1 >= 1 && pok1 <=1000 && pok2 >= 1 && pok2 <=1000 && pok3 >= 1 && pok3 <=1000 ){
        if( pok1 > pok2 && pok2 >= pok3){
            (doces - pok3) >= 0 ? ++contador, doces = doces - pok3 : contador == contador;
            (doces - pok2) >= 0 ? ++contador, doces = doces - pok2 : contador == contador;
            (doces - pok1) >= 0 ? ++contador, doces = doces - pok1 : contador == contador;
            printf("%i", contador);
            }
        
        else if ( pok2 > pok1 && pok1 >= pok3){
            (doces - pok3) >= 0 ? ++contador, doces = doces - pok3 : contador == contador;
            (doces - pok1) >= 0 ? ++contador, doces = doces - pok1 : contador == contador;
            (doces - pok2) >= 0 ? ++contador, doces = doces - pok2 : contador == contador;
            printf("%i", contador);
            }

        else if (pok1 > pok3 && pok3 >= pok2){
            (doces - pok2) >= 0 ? ++contador, doces = doces - pok2 : contador == contador;
            (doces - pok3) >= 0 ? ++contador, doces = doces - pok3 : contador == contador;
            (doces - pok1) >= 0 ? ++contador, doces = doces - pok1 : contador == contador;
            printf("%i", contador);
            }
            
        else if ( pok2 > pok3 && pok3 >= pok1){
            (doces - pok1) >= 0 ? ++contador, doces = doces - pok1 : contador == contador;
            (doces - pok3) >= 0 ? ++contador, doces = doces - pok3 : contador == contador;
            (doces - pok2) >= 0 ? ++contador, doces = doces - pok2 : contador == contador;
            printf("%i", contador);
            }
        
        
        else if ( pok3 > pok2 && pok2 >= pok1){
            (doces - pok1) >= 0 ? ++contador, doces = doces - pok1 : contador == contador;
            (doces - pok2) >= 0 ? ++contador, doces = doces - pok2 : contador == contador;
            (doces - pok3) >= 0 ? ++contador, doces = doces - pok3 : contador == contador;
            printf("%i", contador);
            
            }
        
        else if ( pok3 > pok1 && pok1 >= pok2){
            (doces - pok2) >= 0 ? ++contador, doces = doces - pok2 : contador == contador;
            (doces - pok1) >= 0 ? ++contador, doces = doces - pok1 : contador == contador;
            (doces - pok3) >= 0 ? ++contador, doces = doces - pok3 : contador == contador;
            printf("%i", contador);
            }
        
        else if ( pok1 == pok2 && pok2 == pok3){
            (doces - pok3) >= 0 ? ++contador, doces = doces - pok3 : contador == contador;
            (doces - pok1) >= 0 ? ++contador, doces = doces - pok1 : contador == contador;
            (doces - pok2) >= 0 ? ++contador, doces = doces - pok2 : contador == contador;
            printf("%i", contador);
            
        }
        
    }
    
}