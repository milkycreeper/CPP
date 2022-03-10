#include <stdio.h>
#include <math.h>

int main(){

    int x;

    printf("kvadrant je :\n");
    scanf("%d", &x);

    switch (x){
    case 1:
        printf("Predznaci  su + +");
        break;
    case 2:
        printf("Predznaci  su - +");
        break;
    case 3:
        printf("Predznaci  su - -");
        break;
    case 4:
        printf("Predznaci  su + -");
        break;
    default:
        printf("nepostojeci kvadrant");





    }




















}
