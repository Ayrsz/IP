#include <stdio.h>
#include <string.h>

// Senha = (letra do nomes + o numero nessa posi??o da letra no alfabeto) + 2 ultimos digitos do cpf
int main(){
    int d, temp2;

    scanf("%d", &d);
    int cpf[d][11];
    char nomes[d][11], senhas[d][15], temp[15];
    for(int i = 0; i < d; i++){

        scanf("%s[^ ]", nomes[i]);
        for(int j = 0; j < 11; j++){
        scanf("%1d", &cpf[i][j]);
        }


        strcpy(senhas[i], nomes[i]);
        for(int k = 0; k < strlen(nomes[i]); k++){
            if(senhas[i][k] + cpf[i][k] > 122){
            senhas[i][k] = senhas[i][k] + cpf[i][k] - 26;
               
            }
            else senhas[i][k] += cpf[i][k];

        }



    }
    for (int j = 0; j < d; j++)
    for(int i = 1; i < d; i++){
        if(strcmp(nomes[i], nomes[i-1]) < 0){
            strcpy(temp, nomes[i]);
            strcpy(nomes[i], nomes[i-1]);
            strcpy(nomes[i-1], temp);
            
            strcpy(temp, senhas[i]);
            strcpy(senhas[i], senhas[i-1]);
            strcpy(senhas[i-1], temp);
            
            temp2  = cpf[i][9];
            cpf[i][9] = cpf[i-1][9];
            cpf[i-1][9] = temp2;
            
            temp2 = cpf[i][10];
            cpf[i][10] = cpf[i-1][10];
            cpf[i-1][10] = temp2;
            
        }
        
    }
        
    for(int i = 0; i < d; i++){
        printf("%s %s%d%d\n", nomes[i], senhas[i], cpf[i][9], cpf[i][10]);
    }
    

}