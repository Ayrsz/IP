#include <stdio.h>
#define TAM 9999
int main(){
    
    int carro[TAM], k = 0, i = 0, v, x, m, temp; //Declarei as variaveis
    
    scanf("%d", &x);
    
    int vagas[x], situacao[x]; 
    
    for( int i = 0; i < x; i++) vagas[i] = 0;
    
    char atitude[x];
    
    while ( k == 0 ){
        scanf(" %c", &atitude[i]);
        scanf("%d %d", &carro[i], &v);
    
    if(atitude[i] == 'o' && carro[i] == -1 && v == -1){
        k = 1;
    }
        
     else if ( atitude [i] == 'i'){
            if(vagas[v] == 0){ // Vaga[v] = Numero da placa do carro que est? na vaga v
                vagas[v] = carro[i];

            }
            else if (vagas[v] != 0){
                
                int j = v;
                printf("Not empty\n");
                do{
                    ++j;
                    if( j >= x) j = 0;
                    
                    else  if(vagas[j] == 0){
                            vagas[j] = carro[i];
                            break;}
                    if (j == v) printf("FULL\n");
                    
                } while (j != v);
                
                }
                
            }
        
        else if( atitude [i] == 'r'){
            if ( vagas[v] == carro[i]){
                vagas[v] = 0;
            }
            else printf("Not Found\n");
            
            
        }
        else if ( atitude [i] == 'm'){
            scanf("%d", &m);
            if(vagas[v] != carro[i]){
                printf("Not Found\n");
            }
            else if (vagas[m] == 0){
                temp = vagas[m];
                vagas[m] = vagas[v];
                vagas[v] = temp;
            }
            else printf("Not empty\n");
            
            
        }
        
        i++;
        
    }
    for(int p = 0; p < x; p++){
        if(vagas[p] > 0) printf("Vaga %i -> %i\n", p, vagas[p] );
    }
}