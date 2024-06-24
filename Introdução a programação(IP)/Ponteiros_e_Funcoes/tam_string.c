#include <stdio.h>
#include <string.h>

void tamstr(char *p){
    int contador = 0;
    for(int i = 0; *(p+i) != '\0'; i++){
        contador++;
    }
    printf("%d", contador);
}

int main(){
    char string[10];
    char *str = string;
    do{
        scanf(" %s", string);
        
        if(strcmp(string, "FIM")) {
            tamstr(&(*str));
            printf("\n");
        }
    }
    while(strcmp(string, "FIM"));
    
}