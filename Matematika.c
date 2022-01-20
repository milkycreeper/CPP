#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;

    printf("Unesi dva prirodna broja:\n");
    scanf("%d %d", &a,&b);

    printf("Zbroj dvaju broja je: %d\n", a+b);
    printf("Razlika dvaju broja je: %d\n", a-b);
    printf("Umnozak dvaju broja je: %d\n", a*b);
    printf("Kolicnik dvaju broja je: %d\n", a/b);
    printf("Aritmeticka sredina dvaju broja je: %d\n", a+b/2);
    printf("Geometrijska sredina dvaju broja je: %.2f\n", sqrt((float)a*b));

    return 0;
}

