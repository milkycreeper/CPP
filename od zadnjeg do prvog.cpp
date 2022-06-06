//Ucitati 10 cijelih brojeva i ispisati ih suprotnim redoslijedom od posljedenjeg do prvog

#include <stdio.h>

int main ()
{
    int a[10], i;
  
    for(i=0; i<10; i++)
    {
        printf("\nUcitaj %d. broj:", i+1);
        scanf("%d", &a[i]);
    }
  
    printf("\nBrojevi suprotnim redosljedom su:\n");
  
    for(i=9; i>=0; i--)
        printf("\n %d", a[i]);
  
    return 0;
}