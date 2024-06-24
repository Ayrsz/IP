#include <stdio.h>

int main() {
  int N, altos = 0, medios = 0, baixos = 0, predio_mais_alto = 0, predio_mais_baixo = 100000, dif = 1, temp;

  scanf("%d", & N);
  int alturas[N];
  
  

  for (int i = 0; i < N; i++) {
    scanf("%d", &alturas[i]);
    if (alturas[i] < predio_mais_baixo) {
      predio_mais_baixo = alturas[i];
    }
    if (alturas[i] > predio_mais_alto) {
      predio_mais_alto = alturas[i];
    }
  }


  for (int i = 0; i < N; i++) {
    if (alturas[i] >= 100) ++altos;
  }

  for (int i = 0; i < N; i++) {
    if ((alturas[i] >= 50) && (alturas[i] < 100)) ++medios;
  }

  for (int i = 0; i < N; i++) {
    if (alturas[i] < 50) ++baixos;
  }

  for (int i = 0; i < N; i++) { // Ordenando em ordem crescente
    for (int j = 1; j < N; j++)
      if (alturas[j] < alturas[j - 1]) {
        temp = alturas[j];
        alturas[j] = alturas[j - 1];
        alturas[j - 1] = temp;
      }

  }
  

  for (int i = 1; i < N; i++) {
    if(alturas[i] != alturas[i-1]){
        ++dif;
    }
  }

  printf("%i\n", dif);
  printf("%i\n", altos);
  printf("%i\n", medios);
  printf("%i\n", baixos);
  printf("%i", (predio_mais_alto - predio_mais_baixo));
}