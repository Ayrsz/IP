#include <stdio.h>

int main(){
    int a=0, c=0, nm=0, mesaA=0, mesaC=0, mesaM=0, mesaBA=0, mesaBC=0, mA, mBA, mC, mBC, mM;
    scanf("%d %d %d", &a, &c, &nm);

    if(a>nm){
        mesaA = a / nm;
        a = a%nm;}
    else{
        mesaA = 1;
        a = 0;}

    if(c>nm){
        mesaC = c/nm;
        c = c%nm;}
    else{
        mesaC = 1;
        c = 0;}

    if (a+c==nm) mesaM += 1;

    else if (a%2==0 && c%2==0 && a+c != 0) {
        mesaM += ((a+c)/nm) + 1;
    }

    else{
        if (a>=4) mesaA += 1;
        else{
            mesaBA += a;
            mesaA -= mesaBA;
        }
        if (c>=4) mesaC += 1;
        else{
            mesaBC += c;
            mesaC -= mesaBC;
        }
    }
    
    mA = mesaA * 3 * nm;
    mBA = mesaBA * 4 * (nm + 1);
    mC = mesaC * 2 * nm;
    mBC = mesaBC * 3 * (nm + 1);
    mM = mesaM * 2 * nm;
  
    if (mesaA > 0) 
        printf("%d mesas com adultos: R$%d\n", mesaA, mA);
    if (mesaBA > 0) 
        printf("%d mesas com adultos+1: R$%d\n", mesaBA, mBA);
    if (mesaC > 0) 
        printf("%d mesas com criancas: R$%d\n", mesaC, mC);
    if (mesaBC > 0) 
        printf("%d mesas com criancas+1:  R$%d\n", mesaBC, mBC);
    if (mesaM > 0) 
        printf("%d mesas mistas: R$%d\n", mesaM, mM);

    return 0;
}
