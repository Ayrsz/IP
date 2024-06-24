#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[30], tipo[15];
    int ataque, defesa; 
} pokemons;

int main(){
    pokemons pokemon, copia;
    int N, temp;
    scanf(" %s", pokemon.nome);
    scanf(" %s", pokemon.tipo);
    scanf("%d %d", &pokemon.ataque, &pokemon.defesa);

    scanf("%d", &N);
    pokemons pokemons_ashe[N];
    int fator[N];

    for(int i = 0; i < N; i++){
         scanf(" %s", pokemons_ashe[i].nome);
        scanf(" %s", pokemons_ashe[i].tipo);
        scanf("%d %d", &pokemons_ashe[i].ataque, &pokemons_ashe[i].defesa);
    }

    for(int i = 0; i < N; i++){
        if( !strcmp(pokemons_ashe[i].tipo, "agua") && !strcmp(pokemon.tipo, "fogo")){
            fator[i] = (pokemons_ashe[i].ataque*1.5) - pokemon.defesa;
        }
        else if(!strcmp(pokemons_ashe[i].tipo, "grama") && !strcmp(pokemon.tipo, "agua") ){
            fator[i] = (pokemons_ashe[i].ataque*1.5) - pokemon.defesa;

        }
        else if(!strcmp(pokemons_ashe[i].tipo, "fogo") && !strcmp(pokemon.tipo, "grama")){
            fator[i] = (pokemons_ashe[i].ataque*1.5) - pokemon.defesa;
        }
        else fator[i] = pokemons_ashe[i].ataque - pokemon.defesa;
    }

    for(int i = 0; i < N; i++)
        for(int j = 0; j < (N-1); j++){
            if(fator[j] < fator[j+1]){
                temp = fator[j];
                fator[j] = fator[j+1];
                fator[j+1] = temp;
                
                copia = pokemons_ashe[j];
                pokemons_ashe[j] = pokemons_ashe[j+1];
                pokemons_ashe[j+1] = copia;
                
            }
            else if(fator[j] == fator[j+1] && strcmp(pokemons_ashe[j].nome, pokemons_ashe[j+1].nome) > 0 ){
                temp = fator[j];
                fator[j] = fator[j+1];
                fator[j+1] = temp;
                
                copia = pokemons_ashe[j];
                pokemons_ashe[j] = pokemons_ashe[j+1];
                pokemons_ashe[j+1] = copia;
            }
        }


    
    for(int i = 0; i < N; i++){
        printf("%d. %s", i+1, pokemons_ashe[i].nome);
        if(i != (N-1))
        printf("\n");
    }
}