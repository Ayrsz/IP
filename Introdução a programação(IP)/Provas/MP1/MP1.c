#include <stdio.h>

int main(){

    int Numero_alunos, melhores_notas[3], piores_notas[3], Quantidade_provas, p = 0, reprovados = 0, aprovados = 0, quantidade_notas;

    scanf("%d %d %d", &Numero_alunos, &Quantidade_provas, &quantidade_notas);

    float notas[Numero_alunos], medias_alunos[300] = {0}, media_geral = 0; 

    for (int i = 0; i < (Numero_alunos * Quantidade_provas); i++){ // Aqui eu estou acumulando as notas em um só vetor e acumulando as notas do aluno '0','1'...
    //em um vetor media que eu irei calcular corretamente após esse for
        
        if((i % Quantidade_provas == 0 && i != 0)){
            ++p;
        }
        scanf("%f", &notas[0]);
        medias_alunos[p] += notas[0];
    }

    for (int i = 0; i <= p; i++){ // Como eu somei todas as notas do aluno n então eu preciso dividir pelo numero de provas que ele realizou
        medias_alunos[i] = medias_alunos[i]/ Quantidade_provas;
        if(medias_alunos[i] >= 7) ++aprovados;
        else ++reprovados;
    }

    for (int i = 0; i <= p; i++ ){ // Fiz a media geral
        media_geral += medias_alunos[i];
    }
    media_geral = media_geral / Numero_alunos;

     

    for (int i = 0; i <= p; i++){ // Agora vou ordenar em ordem decrescente
        for(int j = 1; j <= p; j++){
            if( medias_alunos[j] > medias_alunos[j - 1]){
                int temp = medias_alunos[j];
                medias_alunos[j] = medias_alunos[j - 1];
                medias_alunos[j - 1] = temp;
            }
        }
    }
    printf("%.1f\n", media_geral);
    for(int i = 0; i < quantidade_notas; i++){
        printf("%.1f ", medias_alunos[i]);
    }
    printf("\n");

    for (int i = 0; i <= p; i++){ // Agora vou ordenar em ordem decrescente
        for(int j = 1; j <= p; j++){
            if( medias_alunos[j] < medias_alunos[j - 1]){
                int temp = medias_alunos[j];
                medias_alunos[j] = medias_alunos[j - 1];
                medias_alunos[j - 1] = temp;
            }
        }
    }
    for(int i = 0; i < quantidade_notas; i++){
        printf("%.1f ", medias_alunos[i]);
    }
    
    printf("\n%d\n%d", aprovados, reprovados);
}