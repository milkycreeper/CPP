//U svako od polja a i b ucitati pet brojeva. Zbroj elemenata polja a i b dodijeliti elementima polja c. Npr. c[0]=a[0]+b[0] itd.

#include <stdio.h>

int main()
{
    int a[5], b[5], c[5], i;
  
    for(i=0; i<5; i++)
    {
        printf("\nUcitaj %d. broj polja a:", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++)
    {
        printf("\nUcitaj %d. broj polja b:", i+1);
        scanf("%d", &b[i]);
    }
    
    for(i=0; i<5; i++)
    {
        c[i] = a[i] + b[i];

        printf("\na[%d] + b[%d] = %d\n", i, i, c[i]);
    }
    
    return 0;
}