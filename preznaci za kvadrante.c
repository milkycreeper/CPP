#include <stdio.h>
#include <math.h>

int main(){

    int x;

    printf("kvadrant je :\n");
    scanf("%d", &x);


    if (x==1){
        printf("Predznaci su + +\n");
    } else if (x==2){
        printf(" Predznaci su - +\n");
    } else if (x==3){
        printf(" Predznaci su - -\n");
    } else if (x==4){
        printf(" Predznaci su + -\n");
    }
    else
        printf("nepostojeci kvadrant");
}
