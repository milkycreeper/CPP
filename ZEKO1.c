#include <stdio.h>
#include <math.h>

int main(){

    int l;
    int a;
    int b;

    printf("Zekina duljina je:\n");
    scanf("%d", &l);

    printf("Unesi str a:\n");
    scanf("%d", &a);

    printf("Unesi str b:\n");
    scanf("%d", &b);

    float o=2*a+2*b;
    printf("Opseg puta je: %.2f\n", o);
    float skok=3*l;
    printf("Skok je: %.0f dugacak\n", skok);
    float brsk=ceil(o/skok);
    printf("Broj skokova u opsegu je: %.0f\n", brsk);
    float t=brsk*1+3*(brsk-1);
    printf("Vrijeme je %.0f sekunde\n", t);











}
