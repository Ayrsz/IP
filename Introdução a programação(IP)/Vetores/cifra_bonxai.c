#include <stdio.h>

int main(){
    int N, X;
    
    scanf("%d", &N);
    
    char palavra[N];
    
    for(int i = 0; i < N; i++){
        scanf(" %c", &palavra[i]);
    }
    
    scanf("%d", &X);
    
    for(int i = 0; i < N; i++){
        for (int j= 1; j <= X; ++j){
            if(palavra[i] + 1 > 122){
                palavra[i] = 97;
            }
            else palavra[i]++;
        }
    }
    
    for(int i = 0; i < N; i++){
        printf("%c", palavra[i]);
    }
    
}