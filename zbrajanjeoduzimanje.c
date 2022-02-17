#include <stdio.h>
#include <math.h>

int main(){

    char oprtr;
    int a;
    int b;

    printf("Unesi operator:\n");
    scanf("%c", &oprtr);

    printf("Unesi broj a:\n");
    scanf("%d", &a);

    printf("Unesi broj b:\n");
    scanf("%d", &b);


    switch (oprtr){
case '*':
    printf("%d",a*b);
    break;
case '/':
    printf("%.2f",(float)a/b);
    break;
case '+':
    printf("%d",a+b);
    break;
case '-':
    printf("%d",a-b);
    break;
default:
    printf("Kakav ti je to operator?");
    }






}
