#include <stdio.h>

int main(){
    int m,n;

    scanf("%d %d", &m, &n);

    char matriz[m+1][n+1], encostou;

    for(int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) scanf(" %c", &matriz[i][j]);


    for(int i = 0; i < m; i++){
        encostou = 0;
        for(int j = 0; j < n; j++){
            if(matriz[i][j] == 'o' && matriz[i+1][j] == '#'){
                for(int k = j; (matriz[i+1][k] == '#' || matriz[i+1][k+1] == '#') && k!= -1; k--){
                    matriz[i][k] = 'o';
                }
                for(int k = j; (matriz[i+1][k] == '#' || matriz[i+1][k-1] == '#') && k!= n; k++){
                    matriz[i][k] = 'o';
                }
            }
            else if (matriz[i-1][j] == 'o' && matriz[i][j+1] == '#' && matriz[i][j] == '.') matriz[i][j] = 'o';
            
            if(matriz[i][j] == 'o' && matriz[i+1][j] != '#' && (i+1 != m)) matriz[i+1][j] = 'o';
            
        }

    }
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) printf("%c", matriz[i][j]);
    printf("\n");
}
}
