#include <stdio.h>
#include <string.h>

typedef struct{
    char tipo[10];
    int valor, desempenho;
} peca;

int main(){
    int dinheiro, N, motor = 0, lataria = 0, roda = 0, aux = 1, preco, rendimento, restante = -1, mais_barato = 100000000;

    scanf("%d %d", &dinheiro, &N);
    peca pecas[N], temp;

    for(int i = 0; i < N; i ++){
        scanf(" %s", pecas[i].tipo);
        scanf("%d %d", &pecas[i].valor, &pecas[i].desempenho);
        if(!strcmp(pecas[i].tipo, "Lataria")) ++lataria;
        else if(!strcmp(pecas[i].tipo, "Motor")) ++motor;
        else if(!strcmp(pecas[i].tipo, "Roda")) ++roda;
    }
 // Lataria , Motor , Roda 
    for( int i = 0; i < N; i++){
        for(int j = 0; j < (N - 1); j++){
            if(strcmp(pecas[j].tipo, pecas[j+1].tipo) > 0){
                temp = pecas[j];
                pecas[j] = pecas[j+1];
                pecas[j+1] = temp;
            }
            else if(!strcmp(pecas[j].tipo, pecas[j+1].tipo) && pecas[j].desempenho < pecas[j+1].desempenho){
                temp = pecas[j];
                pecas[j] = pecas[j+1];
                pecas[j+1] = temp;
            }
        }
    }
    
// vet[0] --> vet[lataria-1] --> vet[lataria] --> vet[lataria + motor - 1] --> vet[lataria + motor] ---> vet[lataria + motor + roda - 1] 
    for(int i = 0; i < lataria; i++)
        for(int j = 0; j < motor; j++)
            for(int k = 0; k < roda; k++){
                preco = pecas[i].valor + pecas[lataria + j].valor + pecas[lataria + motor + k].valor;
                rendimento = pecas[i].desempenho + pecas[lataria + j].desempenho + pecas[lataria + motor + k].desempenho;
                
                if( dinheiro - preco >= 0 )
                    if(rendimento >= aux && preco <= mais_barato) {
                        aux = rendimento;
                        restante = dinheiro - preco;
                        mais_barato = preco;

                    }
            }
            
    if(lataria && motor && roda && restante >= 0 ){
        printf("Minha nave tem uma performance de %d pontos\n", aux);
        if(restante) printf("E ainda me sobraram %d mangos!", restante);
    }
    else printf("Nao foi possivel construir uma caranga...");
    

    
    return 0;
}