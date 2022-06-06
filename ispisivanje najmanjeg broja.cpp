//Ucitati n elemenata u polje i ispisati najmanji od ucitanih brojeva.

#include <stdio.h>

int main ()
 {
    int a[100], min, n, i;
    
    printf("\nKoliko ce brojeva biti ucitano u polje? ");
    scanf("%d", &n);

    printf("\nUcitaj 1. broj: ");
    scanf("%d", &a[0]);
    min = a[0];
    
    for(i=1; i < n; i++)
    {
        printf("\nUcitaj %d. broj:", i+1);
        scanf("%d", &a[i]);
    
        if(a[i] < min)
            min = a[i];
    }
    
    printf("\nNajmanji ucitani broj je %d.\n", min);
  
    return 0;
}