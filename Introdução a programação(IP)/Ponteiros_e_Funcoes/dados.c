#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int rodada(int distancia, int jogadas){
        if(distancia <= 0) return 1;
        else if(jogadas*6 < distancia || jogadas <= 0) return 0;
        
        int possibilidades = 0;

        for(int i = 1; i <= 6; i++) possibilidades += rodada(distancia - i, jogadas - 1);
    
        return possibilidades;

};

int main() {
	int distancia, jogadas, possibilidades;

    scanf("%d %d", &jogadas, &distancia);

    possibilidades = rodada(distancia, jogadas);

    printf("%d", possibilidades);
}