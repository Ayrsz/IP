#include <stdio.h>

#include <math.h>

int main() {
  int n, contador, valor, divisores = 0, valorsoma = 0;

  scanf("%i", & n);

  for (; n > 0; --n) {
    divisores = 0;
    scanf("%d", & valor);
    for (contador = 1; contador <= sqrt(valor); ++contador) {
      if (valor % contador == 0) {
        ++divisores;
      }

    }
    if (divisores >= 2 || valor == 2) {
      valorsoma += valor;
    } else valorsoma -= valor;
  }
  if (valorsoma >= 0) {
    printf("Ele ainda tem %d dias de vida", valorsoma);
  } else printf("Foi de base");

}