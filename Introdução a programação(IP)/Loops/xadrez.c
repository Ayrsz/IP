#include <stdio.h>

int main() {
  int n, largura, altura;

  scanf("%i", & n);
  largura = n;
  altura = n;

  for (; altura > 0; altura--) {
    while (largura > 0) {
      printf("A");
      --largura;
      if (largura > 0) {
        printf(".");
        --largura;
      }
    }
    printf("\n");
    largura = n;
    if (altura != 1) {
      while (largura > 0) {
        printf(".");
        --largura;
        if (largura > 0) {
          printf("A");
          --largura;
        }
      }
      printf("\n");
      largura = n;
      --altura;
    }
  }
}