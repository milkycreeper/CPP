#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;
    int k=0;

    printf("Unesi prvi broj:");
    scanf("%d", &a);
    printf("\nUnesi drugi broj:");
    scanf("%d", &b);
    printf("\nUnesi treci broj:");
    scanf("%d", &c);

    int i=c;
    while(i){
        i--;
        k+=i;
    }
printf("%d",k);


}
