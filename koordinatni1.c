#include <stdio.h>
#include <math.h>

int main(){

    int Ax;
    int Ay;
    int Bx;
    int By;
    int Cx;
    int Cy;

    printf("Unesi kordinatu Ax:\n");
    scanf("%d", &Ax);

    printf("Unesi kordinatu Ay:\n");
    scanf("%d", &Ay);

    printf("Unesi kordinatu Bx:\n");
    scanf("%d", &Bx);

    printf("Unesi kordinatu By:\n");
    scanf("%d", &By);

    printf("Unesi kordinatu Cx:\n");
    scanf("%d", &Cx);

    printf("Unesi kordinatu Cy:\n");
    scanf("%d", &Cy);

    float a=(float)sqrt(((Bx-Cx)*(Bx-Cx)+(By-Cy)*(By-Cy)));
    float b=(float)sqrt(((Cx-Ax)*(Cx-Ax)+(Cy-Ay)*(Cy-Ay)));
    float c=(float)sqrt(((Bx-Ax)*(Bx-Ax)+(By-Ay)*(By-Ay)));
    float s=(a+b+c)/2;
    float P=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Povrsina trokuta je: %.2f" , P);






}
