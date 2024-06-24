#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
float TAtend; //tempo de atendimento do cliente
int Qitens; 
}Cliente;

typedef struct{
Cliente fila[20000]; //pessoas na fila do caixa
int PessoasEsperando; //pessoas que ainda não foram atendidas
int PessoasAtendidas;
int ocupado; //pessoas que já foram atendidas
}CaixaG;

typedef struct{
int PessoasAtendidas;
int ocupado;
int PessoasEsperando; //assume valores 0 ou 1 dependendo se o caixa está ocupado
Cliente atual; //cliente sendo atendido
}CaixaP;

int main(){
/*    Existem 2 tipos de caixas, o para compras grandes e o para pequenas compras.
    - para pequenas compras é uma só fila com 5 caixas disponíveis podendo ter até 100k de pessoas
    - para grandes compras são 5 filas para 5 caixas                                                */
float divisor, dividendo;
int p = 0, esperando = 0, menor_fila = 10000000, indice, y = 0, e = 0;
char achei_caixa = 0;
CaixaG caixa_grande[5];
CaixaP caixa_pequeno[5];
Cliente fila_pequena[20000];
 
for(int k = 0; k < 5; k++){ // VOu zerar pessoa atendidadas e pessoas esperando, e status dos caixas
    caixa_pequeno[k].PessoasAtendidas = 0;
  
    caixa_pequeno[k].ocupado = 0;
    caixa_grande[k].PessoasAtendidas = 0;
    caixa_grande[k].PessoasEsperando = 0;
    caixa_grande[k].ocupado = 0; 
}

for(float i = 0; i < 24; i = i + 0.01){  // 24 horas.

srand( (unsigned)time(NULL) );         // Inicializa o gerador de números aleatórios
float tem_cliente = (rand()%101)/100.0; //sorteia um número entre 0 e 1


if(tem_cliente > 0.5){ // Um novo cliente chegou!

srand( (unsigned)time(NULL));
float tempo_atendimento = (rand()%101)/100.0; // Agora eu vou calcular o tempo de atendimento desse cliente!
int Qtd_itens_carrinho = rand()%40 + 1; // E aqui vou randomizar o a quantidade de itens no carrinho



if(Qtd_itens_carrinho <= 20){
             // Se ele for pra fila pequena
    int j = 0; // Aux pro do while
    achei_caixa = 0; // Char booleano
    do{ // Vamos verificar se tem algum caixa sendo usado

    if(caixa_pequeno[j].ocupado == 0){

        caixa_pequeno[j].ocupado = 1;
        achei_caixa = 1;
        caixa_pequeno[j].atual.TAtend = tempo_atendimento;
        break; // Achei um livre!, logo o tempo para ele ficar livre novamente é o tempo pra atender esse cliente
    }

    j++;

    }while(j < 5);

    if(!(achei_caixa)){
        ++esperando;   // Ou seja, tem pessoas esperando no caixa_pequeno.
        fila_pequena[y].TAtend = tempo_atendimento;
        y++; // Esse y só serve pra eu criar uma referencia pro vetor fila, que eu vou sempre verificar se um caixa livre pra implementar
        //esses dados lá, no caso só preciso do tempo de atendimento! Pois a quantidade de itens já está no if inicial! 

    }

    for(int l = 0; l < 5; l++){ // Como as horas estão passando, estou subtraindo pra ver se algum fica livre!
        if(caixa_pequeno[l].atual.TAtend > 0){ // OU seja, um tempo que nao seja 0

            caixa_pequeno[l].atual.TAtend = caixa_pequeno[l].atual.TAtend - 0.01; // O tempo ta passando, - 0.01
            if((caixa_pequeno[l].atual.TAtend) == 0) {
                caixa_pequeno[l].PessoasAtendidas++; 
                caixa_pequeno[l].atual.TAtend = fila_pequena[e].TAtend; // A primeira pessoa da fila vai vir pra cá!, e esse "e" serve com referencia
                e++;
                if(esperando != 0) esperando --; //Quem tava esperando foi ser atendido
                }// Se ele ficar livre quer dizer que a pessoa foi atendida

        } // To subtraindo todos os tempos!
    }

   

}
else if(Qtd_itens_carrinho > 20 ){

    int j = 0; // Aux pro do while
    achei_caixa = 0; // Char booleano

    do{ // Vamos verificar se tem algum caixa sendo usado

        if(caixa_grande[j].ocupado == 0){ // Veja se tem algum caixa ocupado do grande!
        caixa_grande[j].ocupado = 1;
        achei_caixa = 1;
        break; // Achei um livre!, logo o tempo para ele ficar livre novamente é o tempo pra atender esse cliente
    }
    j++;
    }while(j < 5);

    if(!(achei_caixa)){ // Agora como não achei um caixa, vou pra menor fila!

        for(int m = 0; m < 5; m++){
            if(caixa_grande[m].PessoasEsperando < menor_fila){
                menor_fila = caixa_grande[m].PessoasEsperando;
                indice = m;
            }
        }

        caixa_grande[indice].PessoasEsperando++;

    }
    

}


}

}
for(int i = 0; i < 5; i++){ // Pra printar eu vou calcular o seguinte, vou somar todas pessoas atendidas e dividir pela soma das pessoas
                             // Que entraram no mercado, ou seja (pessoaAtendidas + pessoasEsperando)
   divisor += caixa_grande[i].PessoasAtendidas + caixa_grande[i].PessoasEsperando + caixa_pequeno[i].PessoasAtendidas + esperando;
   dividendo += caixa_grande[i].PessoasAtendidas + caixa_pequeno[i].PessoasAtendidas;
}
if(divisor != 0){
printf("%.2f%%", (dividendo/divisor) * 100);
}
else printf("0.00%%");
}