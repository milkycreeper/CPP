#include<stdio.h>

int main(){

    int a;
    int z;
    int p;
    int sum;

    printf("Unesi neki broj: ");
    scanf("%d", &a);

    z=a%10;

    while(a>10){
        a/=10;
    }
    p=a;
    sum=p+z;

    printf("Suma brojeva iznosi: %d", sum);






}
