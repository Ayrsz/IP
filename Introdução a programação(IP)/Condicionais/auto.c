#include <stdio.h>

#include <math.h>

int main() {
  float x0, y0, xA, yA, xB, yB, xC, yC, da, db, dc, d;
  char A = A, B = B, C = C;
  scanf("%f %f %f %f", & x0, & y0, & xA, & yA);
  scanf("%f %f %f %f", & xB, & yB, & xC, & yC);

  da = sqrt(pow(xA - x0, 2) + pow(yA - y0, 2));
  db = sqrt(pow(xB - x0, 2) + pow(yB - y0, 2));
  dc = sqrt(pow(xC - x0, 2) + pow(yC - y0, 2));
  

  if (da > db && db > dc) {
    printf("C ");
    x0 = xC - x0;
    y0 = yC - y0;
    da = sqrt(pow(xA - x0, 2) + pow(yA - y0, 2));
    db = sqrt(pow(xB - x0, 2) + pow(yB - y0, 2));
    da <= db ? printf("A B"):printf("A B");

  } else if (da > dc && dc > db) {
    printf("B ");
    x0 = xB;
    y0 = yB;
    da = sqrt(pow(xA - x0, 2) + pow(yA - y0, 2));
    dc = sqrt(pow(xC - x0, 2) + pow(yC - y0, 2));
    da <= dc ? printf ("A C"): printf("C A");

  } else if (db > da && da > dc) {
    printf("C ");
    x0 = xC;
    y0 = yC;
    da = sqrt(pow(xA - x0, 2) + pow(yA - y0, 2));
    db = sqrt(pow(xB - x0, 2) + pow(yB - y0, 2));
    da <= db ? printf("A B"):printf("B A");

  } else if (db > dc && dc > da) {
    printf("A ");
    x0 = xA;
    y0 = yA;
    db = sqrt(pow(xB - x0, 2) + pow(yB - y0, 2));
    dc = sqrt(pow(xC - x0, 2) + pow(yC - y0, 2));
    db <= dc ? printf("B C"):printf("C B");

  } else if (dc > db && db > da) {
    printf("A ");
    x0 = xA;
    y0 = yA;
    db = sqrt(pow(xB - x0, 2) + pow(yB - y0, 2));
    dc = sqrt(pow(xC - x0, 2) + pow(yC - y0, 2));
    db <= dc ? printf("B C"):printf("C B");

  } else if (dc > da && da > db) {
    printf("B ");
    x0 = xB;
    y0 = yB;
    da = sqrt(pow(xA - x0, 2) + pow(yA - y0, 2));
    dc = sqrt(pow(xC - x0, 2) + pow(yC - y0, 2));
    da <= dc ? printf("A C"):printf("C A");

  } else if (da == db && db > dc) {
    printf("C ");
    x0 = xC;
    y0 = yC;
    da = sqrt(pow(xA - x0, 2) + pow(yA - y0, 2));
    db = sqrt(pow(xB - x0, 2) + pow(yB - y0, 2));
    da <= db ? printf("A B"):printf("B A");

  } else if (db == dc && dc > da) {
    printf("A ");
    x0 = xA;
    y0 = yA;
    db = sqrt(pow(xB - x0, 2) + pow(yB - y0, 2));
    dc = sqrt(pow(xC - x0, 2) + pow(yC - y0, 2));
    db <= dc ? printf("B C"):printf("C B");

  } else if (da == dc && dc > db) {
    printf("B ");
    x0 = xB;
    y0 = yB;
    da = sqrt(pow(xA - x0, 2) + pow(yA - y0, 2));
    dc = sqrt(pow(xC - x0, 2) + pow(yC - y0, 2));
    da <= dc ? printf("A C"):printf("C A");

  } else if (da == dc && dc == db) {
    printf("A");
    x0 = xA;
    y0 = yA;
    db = sqrt(pow(xB - x0, 2) + pow(yB - y0, 2));
    dc = sqrt(pow(xC - x0, 2) + pow(yC - y0, 2));
    db <= dc ? printf("B C"):printf("C B");
  }
}