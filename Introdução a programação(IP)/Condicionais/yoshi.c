#include <stdio.h>

//qual delas possui o melhor custo benef�cio dentro do valor que ele pode pagar com suas moedas.
// Verde,Vermelho,Roxo e Amarelo.
/*  Verde - 80 K/h
    Vermelho - 100 K/h
    Roxo - 120 K/h
    Amarelo - 80 K/h 
    custo beneficio = Velocidade / tempo */
int main(){
    int moedas, verde, vermelho, roxo, amarelo;
    float benefverd, benefverm, benefroxo, benefamarelo;

    scanf("%i %i %i %i %i", &moedas, &verde, &vermelho, &roxo, &amarelo);

    benefverd = 80 / verde;
    benefverm = 100 / vermelho;
    benefroxo = 120 / roxo;
    benefamarelo = 80 / amarelo;

    if ( moedas >= verde || moedas >= amarelo || moedas >= vermelho || moedas >= roxo){
        if (benefverd >= benefverm && benefverd >= benefamarelo && benefverd >= benefroxo){
            printf("Verde");
        }
        else if (benefverm >= benefroxo && benefverm > benefverd && benefverm >= benefamarelo){
            printf("Vermelho");
        }
        else if(benefroxo > benefverm && benefroxo > benefverd && benefroxo >= benefamarelo){
            printf("Roxo");
        }
        else if (benefamarelo > benefroxo && benefamarelo > benefverd && benefamarelo > benefverm){
            printf ("Amarelo");
        }

    }

    else printf("Acho que vou a pe :(");

}