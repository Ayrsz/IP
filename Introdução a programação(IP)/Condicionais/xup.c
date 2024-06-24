#include <stdio.h>

int main (){
    long int A, B, N, C, nA, nB, nAB, SA, SN, SB, SAB, anA, anB, anAB;

    scanf("%ld %ld %ld", &N, &A, &B);

    C = A*B;
    nA = N / A;
    nB = N / B; 
    nAB = N / C;

    anA = A + ( nA - 1) * A;
    anB = B + (nB - 1) * B;
    anAB= C + (nAB -1) * C;

    SN = ((N+1)*(N)) / 2;
    SA = ((anA + A) * nA) / 2;
    SB = ((anB + B) * nB) / 2;
    SAB = ((anAB + C) * nAB) / 2;

    SN = SN - SA - SB + SAB; 
    if (A != 0 && B != 0 && N != 0){
    if((A % 2 != 0 && A % 3 != 0 && A % 5 != 0 && A % 7 != 0 && A % 11 !=0) || A==2 || A==3 || A==5 || A==7 || A==11){
        if ((B % 2 != 0 && B % 3 != 0 && B % 5 != 0 && B % 7 != 0 && B % 11 !=0) || B==2 || B==3 || B==5 || B==7 || B==11){
            printf("%ld\n", SN);
            SN % 2 == 0 ? printf("L� ele!!!"):printf("Opa xupenio AULAS...");
        }
    }
} else printf("L� ele!!!");
}