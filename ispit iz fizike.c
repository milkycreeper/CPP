#include <stdio.h>
#include <math.h>

int main(){

    int N;
    int k;
    int J1,J2,J3,J4,J5;
    int J;
    int count=0;

    printf("Unesi broj koliko ima zadataka u zbirci: ");
    scanf("%d", &N);
    printf("\n Unesi koliko Josip zna zadataka: ");
    scanf("%d", &k);
    printf("\n Unesi koje je profesorica zadatke odabrala: ");
    scanf("%d %d %d %d %d", &J1,&J2,&J3,&J4,&J5);

    printf("Koje Josip zna?\n");

    while(k)
    {
        k--;
        scanf("%d", &J);
        if(J==J1||J==J2||J==J3||J==J4||J==J5) count++;
    }
    count=count==0?1:count;
     printf("Josip je dobio %d", count);


}
