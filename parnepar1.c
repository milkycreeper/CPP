#include <stdio.h>
#include <math.h>

int main(){

    int a;

    printf ("Unesi broj\n");
    scanf ("%d", &a);

    if (a % 2 == 1)
    {
    printf("Broj je neparan");
    }

    if(a % 2 == 0){
        printf("Broj je paran");
   }
    return 0;
}
