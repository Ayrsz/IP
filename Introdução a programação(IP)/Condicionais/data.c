#include <stdio.h>

int main() {
  int dia, mes, ano;
  scanf("%i %i %i", & dia, & mes, & ano);
  if (ano > 1900 && ano < 2100) {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
      dia >= 1 && dia <= 31 ? printf("valida") : printf("invalida");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
      dia >= 1 && dia <= 30 ? printf("valida") : printf("invalida");
    } else if (mes == 2 && ano % 4 == 0) {
      dia >= 1 && dia <= 29 ? printf("valida") : printf("invalida");
    } else if (mes == 2 && ano % 4 != 0){
      dia >= 1 && dia <= 28 ? printf("valida") : printf("invalida");
    } else if (mes < 1 || mes > 12) {
      printf("invalida");
    } 

  } else printf("invalida");
  return 0;
}