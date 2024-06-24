#include <stdio.h>
#include <string.h>

int main(){
    char conjunto[30], palavra[30], temp, contido, p;
    int n, x = 0, banco_de_dados[58] = {};
    
    scanf("%s[^\n]", conjunto);
    scanf("%d", &n);
    for(int i = 0; i < strlen(conjunto); i++)
        for(int j = 1; j < strlen(conjunto); j++)
            if(conjunto[j] < conjunto[j-1]){
                temp = conjunto[j];
                conjunto[j] = conjunto[j-1];
                conjunto[j-1] = temp;
                
            }
    for(int i = 0; i < strlen(conjunto); i++){
        temp = 0;
        for(int j = 0; j < 58 && !temp ; j++)
            if(conjunto[i] == j + 65){
              banco_de_dados[j]++; 
              temp = 1; // Criei esse "banco de dados" para amarzenar quantas vezes uma letra aparece, [0] = 'A';
            }
            
        
    }
    
    while(n > 0){
        
        scanf("%s[^\n]", palavra);
        contido = 1;
        for(int i = 0; i < strlen(palavra) && contido; i++){
            p = 0;
            for(int j = 0; j < strlen(conjunto) && !p; j++){
                if(palavra[i] == conjunto[j]) {
                    contido = 1;
                    p = 1;
                    
                }
                else if(j == (strlen(conjunto) - 1) )
                    contido = 0; 
            }
        }
        if(contido){
            ++x;
        }
        
        
        
        --n;
    }
    
    printf("E possivel formar %d palavras com esse conjunto", x);
}