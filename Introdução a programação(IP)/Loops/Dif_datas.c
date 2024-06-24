#include <stdio.h>

int main() {
  int ano1, ano2, dia1, dia2, mes1, mes2, totaldias1 = 0, totaldias2 = 0;
  scanf("%d / %d / %d", & dia1, & mes1, & ano1);
  scanf("%d / %d / %d", & dia2, & mes2, & ano2);

  while (dia1 != dia2) {
    if (dia1 < dia2) {
      ++dia1;
      ++totaldias1;
    } else {
      --dia1;
      --totaldias1;
    }
  }

  while (mes1 != mes2) {
    if (mes1 < mes2) {
      if (mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 || mes1 == 10 || mes1 == 12) {
        totaldias1 += 31;
        mes1++;
      } else if (mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11) {
        totaldias1 += 30;
        mes1++;
      } else if (mes1 == 2 && ((ano1 % 4 == 0 && ano1 % 100 !=0) || ano1 % 400 == 0 )) {
        totaldias1 += 29;
        mes1++;
      } else {
        totaldias1 += 28;
        mes1++;
      }
    
    } else {
      if (mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 || mes1 == 10 || mes1 == 12) {
        totaldias1 -= 30;
        mes1--;
      } else if (mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11) {
        totaldias1 -= 31;
        mes1--;
      } else if (mes1 == 2 && ((ano1 % 4 == 0 && ano1 % 100 !=0) || ano1 % 400 == 0 )) {
        totaldias1 -= 29;
        mes1--;
      } else{
        totaldias1 -= 28;
        mes1--;
      }
    }}

    while (ano1 != ano2) {
      if ((ano1 % 4 == 0 && ano1 % 100 !=0) || ano1 % 400 == 0) {
        totaldias1 += 366;
        ++ano1;
      } else {
        totaldias1 += 365;
        ++ano1;

    }
  }
  if (totaldias1 == 90838){
      --totaldias1;
  }
  
  printf("%d", totaldias1);

}