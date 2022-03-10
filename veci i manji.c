#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;

    printf("Unesi prvi broj a:\n");
    scanf("%d", &a);

    printf("Unesi drugi broj b:\n");
    scanf("%d", &b);


    if(a>b)
        printf("Prvi broj (%d) je veci od drugog broja (%d)",a,b);

    else
        printf ("Drugi broj (%d) je veci od prvog broja (%d)",b,a);

  return 0;


}
