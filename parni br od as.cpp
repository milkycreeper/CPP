//Ucitati 10 brojeva u polje i ispisati sve parne brojeve koji su veći od aritmeticke sredine neparnih brojeva.

#include <stdio.h>

int main ()
{
    int a[10], zbroj=0, i, br=0;
    float ars;
  
    for(i=0; i<10; i++)
    {
        printf("\nUcitaj %d. broj polja:", i+1);
        scanf("%d", &a[i]);
    
        if(a[i]%2 != 0)
        {
            zbroj = zbroj + a[i];
            br++;
        }
    }
    
    if (br != 0) 
    {
        ars = (float)zbroj / br;
        printf("\nParni brojevi veci od ars neparnih brojeva su:\n");
  
        for(i=0; i<10; i++)
            if(a[i]%2==0 && a[i]>ars)
                printf("\n%d ", a[i]);
    }
    
    return 0;
}