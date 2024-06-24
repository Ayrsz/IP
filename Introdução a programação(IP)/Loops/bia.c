#include <stdio.h>
#include <math.h>

int main() {
  int n, valor, valorsomado = 0, contador, maior, menor, coef, fatorial = 1, x = 2147483647, y;

  scanf("%d", & n);

  while (n > 0) {
    scanf("%i", & valor);
    valorsomado = valorsomado + valor;
    --n;
  }

  if (valorsomado > 1) {
    for (contador = 2; fatorial < valorsomado; ++contador) {
      fatorial = 1;
      for (coef = contador; coef > 0; coef--) {
        fatorial = fatorial * coef;
      }

      if (fabs(fatorial - valorsomado) < x ){
        y = contador;
        x = fabs(fatorial - valorsomado);
      }
      else continue;

    }
}
else y = 0;
printf("Bia arrecadou %d! dinheiros e pode jogar tenis!", y);
}