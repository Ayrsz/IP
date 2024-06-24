#include <stdio.h>
#include <math.h>

int main(){

    double x1, x2, y1, y2, x3, y3, IAF1, IAF2, IAF3;
    int k1, k2, k3;

    scanf("%lf %lf %i", &x1, &y1, &k1);
    scanf("%lf %lf %i", &x2, &y2, &k2);
    scanf("%lf %lf %i", &x3, &y3, &k3);

    IAF1 = (x1 * x1 * 2.71)/ y1;
    IAF2 = (x2 * x2 * 2.71)/ y2; 
    IAF3 = (x3 * x3 * 2.71)/ y3;

    if (IAF1 < 0) IAF1 = fabs(IAF1);
    if (IAF2 < 0) IAF2 = fabs(IAF2);
    if (IAF3 < 0) IAF3 = fabs(IAF3);

    if ( y1 != 0){
    if ( IAF1 < 32.5){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Calouro.\n", k1, IAF1);
    }
    else if ( IAF1 >= 32.5 && IAF1 <= 63.9){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Iniciado.\n", k1, IAF1);
    }
    else if ( IAF1 >= 64.0 && IAF1 <= 127.9){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Morador do Grad.\n", k1, IAF1);
    }
    else if ( IAF1 >= 128.0 && IAF1 <= 255.9){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Matem�tico Discreto.\n", k1, IAF1);
    }
    else if ( IAF1 >= 256.0 && IAF1 <= 512.0 ){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Conserta Impressoras.\n", k1, IAF1);
    }
    else printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Sem volta.\n", k1, IAF1);
    }
    else printf("O aluno de �ndice %i possui o valor IAF igual a 0.00 e a descri��o de Calouro.\n", k1);
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (y2 != 0){
    if ( IAF2 < 32.5){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Calouro.\n", k2, IAF2);
    }
    else if ( IAF2 >= 32.5 && IAF2 <= 63.9){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Iniciado.\n", k2, IAF2);
    }
    else if ( IAF2 >= 64.0 && IAF2 <= 127.9){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Morador do Grad.\n", k2, IAF2);
    }
    else if ( IAF2 >= 128.0 && IAF2 <= 255.9){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Matem�tico Discreto.\n", k2, IAF2);
    }
    else if ( IAF2 >= 256.0 && IAF2 <= 512.0 ){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Conserta Impressoras.\n", k2, IAF2);
    }
    else printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Sem volta.\n", k2, IAF2);
    }
    else printf ("O aluno de �ndice %i possui o valor IAF igual a 0.00 e a descri��o de Calouro.\n", k2);
//********************************************************************************************************************************************
    if (y3 != 0){
    if ( IAF3 < 32.5){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Calouro.\n", k3, IAF3);
    }
    else if ( IAF3 >= 32.5 && IAF3 <= 63.9){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Iniciado.\n", k3, IAF3);
    }
    else if ( IAF3 >= 64.0 && IAF3 <= 127.9){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Morador do Grad.\n", k3, IAF3);
    }
    else if ( IAF3 >= 128.0 && IAF3 <= 255.9){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Matem�tico Discreto.\n", k3, IAF3);
    }
    else if ( IAF3 >= 256.0 && IAF3 <= 512.0 ){
        printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Conserta Impressoras.\n", k3, IAF3);
    }
    else printf("O aluno de �ndice %i possui o valor IAF igual a %.2lf e a descri��o de Sem volta.\n", k3, IAF3);
    }
    else printf ("O aluno de �ndice %i possui o valor IAF igual a 0.00 e a descri��o de Calouro.\n", k3);
}