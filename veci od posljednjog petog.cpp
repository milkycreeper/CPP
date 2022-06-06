//Ucitati 5 brojeva u polje i ispisati one elemente polja koji su veci od posljednjeg 5-tog elementa polja.

#include <stdio.h>

int main ()
{
    int a[5], i;
  
    for(i=0; i<5; i++)
    {
        printf("\nUpisi %d. broj polja:", i+1);
        scanf("%d", &a[i]);
    }
  
    printf("\n Brojevi veci od posljednog elementa polja su: ");
  
    for(i=0; i<5; i++)
        if(a[i] > a[4])
            printf("\n%d ", a[i]);
  
    return 0;
}