#include <stdio.h>

int main (){

    int vet1[100], vet2[100], vet3[100], quantidade[3] = {}, i = 0, temp;

    do{
    scanf("%d", &vet1[i]);
    ++quantidade[0];
    ++i;
    }while(vet1[i - 1] != 420);

    i = 0;
    do{
    scanf("%d", &vet2[i]);
    ++quantidade[1];
    ++i;
    }while(vet2[i - 1] != 420);

    i = 0;
    do{
    scanf("%d", &vet3[i]);
    ++quantidade[2]; 
    ++i;
    }while(vet3[i - 1] != 420);

// Atribui valor a todos os vetores agora vamos ordenar

    for ( int a = 0; a < quantidade[0]; a++ ){

        for(int b = 1; b < quantidade[0]; b++ ){
            if(vet1[b] < vet1[b-1]){
                temp = vet1[b];
                vet1[b] = vet1[b-1];
                vet1[b-1] = temp;
            }
        }
    }

    for ( int a = 0; a < quantidade[1]; a++ ){

        for(int b = 1; b < quantidade[1]; b++ ){
            if(vet2[b] < vet2[b-1]){
                temp = vet2[b];
                vet2[b] = vet2[b-1];
                vet2[b-1] = temp;
            }
        }
    }

    for ( int a = 0; a < quantidade[2]; a++ ){

        for(int b = 1; b < quantidade[2]; b++ ){
            if(vet3[b] < vet3[b-1]){
                temp = vet3[b];
                vet3[b] = vet3[b-1];
                vet3[b-1] = temp;
            }
        }
    }

// J� ordenamos, agora vou printar

printf("%i\n", quantidade[0]);

for (int a = 0; a < quantidade [0]; a++){
    printf("%i ", vet1[a]);
}

printf("\n");

printf("%i\n", quantidade[1]);

for (int a = 0; a < quantidade [1]; a++){
    printf("%i ", vet2[a]);
}

printf("\n");

printf("%i\n", quantidade[2]);

for (int a = 0; a < quantidade [2]; a++){
    printf("%i ", vet3[a]);
}  
}