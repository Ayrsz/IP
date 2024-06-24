#include <stdio.h>

typedef struct{
    int numero_passagem, dia, mes, ano, numero_poltrona, segundos, minutos, idade;
    char nome[100], origem[100], destino[100]; 

}passageiro;



int main(){ 
    int i = -1;
    float media = 0;
    passageiro passageiros[49];
    do{
        i++;
        
        scanf("%d", &passageiros[i].numero_passagem);
        if(passageiros[i].numero_passagem != -1){

        scanf("%d/%d/%d", &passageiros[i].dia, &passageiros[i].mes, &passageiros[i].ano);
        scanf(" %[^\n]", passageiros[i].origem);
        scanf(" %[^\n]", passageiros[i].destino);
        scanf("%d:%d", &passageiros[i].minutos, &passageiros[i].segundos);
        scanf("%d %d", &passageiros[i].numero_poltrona, &passageiros[i].idade);
        scanf(" %[^\n]", passageiros[i].nome);
       

        media+= passageiros[i].idade;
        
        }
    }
    while(passageiros[i].numero_passagem != -1 && i < 50);

    media = media / i;

    for(int j = 0; j < i; j++){
        if(passageiros[j].idade > media && (passageiros[j].numero_poltrona % 2 == 0)){
            printf("%s", passageiros[j].nome);
            printf("\n");
        }
    }
}