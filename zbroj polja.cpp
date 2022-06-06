//Ucitati 10 brojeva i u drugo polje od 5 elemenata upisati vrijednosti zbroja 1 i 10 elementa, 2 i 9 elementa ... 5 i 6 elementa prvog polja.

#include <stdio.h>

int main()
{
    int a[10], b[5], i;
    
    for(i=0; i<10; i++)
    {
        printf("\nUcitaj %d. broj:", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++)
    {
        b[i] = a[i] + a[9-i];
        
        printf("\n Zbroj a[%d] i a[%d] = %d\n", i, 9-i, b[i]);
    }
    
    return 0;
}