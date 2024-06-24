#include <stdio.h>

int main() {
  char letra, contador = 65, y;
  int linhas, pontos;

  scanf(" %c", & letra);

  for (; contador <= letra; contador++) {
    linhas = (letra - contador) + 1;
    pontos = linhas - 1;
    y = 65;
    while (pontos != 0) {
      printf(".");
      --pontos;
    }
    pontos = linhas - 1;
    while (y <= contador) {
      printf("%c", y);
      ++y;
    }
    --y;
    while (y > 65) {
      --y;
      printf("%c", y);

    }

    while (pontos != 0) {
      printf(".");
      --pontos;

    }
    printf("\n");
  }

}