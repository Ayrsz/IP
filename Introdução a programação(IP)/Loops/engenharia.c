#include <stdio.h>

int main() {
  int janela = 0, alvenaria = 0, alierce = 0, preco, altura, largura, l, contador;

  scanf("%d x %d", & altura, & largura);
  if (largura % 2 != 0) {
    altura = altura - 3; 

    for (l = largura; l > 0; l--) {
      printf("= ");
      ++alvenaria;
    }
    printf("\n");

    for (; altura > 0; altura = altura - 2) {
      l = largura;
      while (l > 0) {
        printf("= ");
        --l;
        ++alvenaria;
        if (l > 0) {
          printf("o ");
          ++janela;
        }
        --l;
      }
      printf("\n");
      if (altura != 1) {
        l = largura;
        while (l > 0) {
          printf("= ");
          --l;
          ++alvenaria;
        }
        printf("\n");
      }

    }
    for (contador = 0; contador < 2; contador++) {
      l = largura;
      while (l > (largura + 1) / 2) {
        printf("= ");
        ++alvenaria;
        --l;
      }
      printf("H ");
      while (l > 1) {
        printf("= ");
        ++alvenaria;
        --l;
      }
      printf("\n");
    }
    for (contador = 2 * largura - 1; contador > 0; contador--) {
      printf("-");
      ++alierce;
    }
    printf("\n\n");

    preco = (janela * 250) + (alvenaria * 85) + (alierce * 133) + 500;
    printf("E o valor total eh %d", preco);
  } else printf("Nao posso construir nessas proporcoes");
}