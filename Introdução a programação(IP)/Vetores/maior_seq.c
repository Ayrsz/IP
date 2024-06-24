#include <stdio.h>

int main(){

    int N, T, maior_sequencia = 0, k, primeiro_indice, p, TAM, copia[100] = { };

    scanf("%i", &T);


    while( T > 0){
        maior_sequencia = 0;
        k = 1;
        
        scanf("%d", &N);
        int vet[N];
        
        for(int i = 0; i < N; i++){
            scanf("%d", &vet[i]);
        }
     
        for(int i = 1; i < N; i++){
            if(vet[i] < vet[i-1]){
                if(k==1){
                    primeiro_indice = i-1;
                }
                ++k;
            if( k > maior_sequencia){
                p = 0;
                maior_sequencia = k;
                TAM = (i - primeiro_indice + 1);
                
                for(int j = primeiro_indice; j <= i ; j++){
                    copia[p] = vet[j];
                    ++p;
                }
            }
            }
            else k = 1;
        }
         printf("%i", maior_sequencia);
         printf("\n");
        
        for (int i=0 ; i < maior_sequencia; i++ ){
            printf("%i ", copia[i]);
        }
        if(maior_sequencia != 0){
            
        printf("\n");
        }
    --T;
}
}