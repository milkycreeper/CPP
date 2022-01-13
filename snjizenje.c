#include <stdio.h>
#include <math.h>

int main(){
    int s;
    int n;
    float P;

    printf("Unesi staru cijenu:\n");
    scanf("%d", &s);
    printf("Unesi novu cijenu:\n");
    scanf("%d", &n);

    P= 100-((float)n/s)*100;

    printf("Postotak snizenog proizvoda je: %.0f\n",P);


}

