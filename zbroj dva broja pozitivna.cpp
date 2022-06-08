#include <stdio.h>
 
int main(){
	
int a, zbr=0, brojac=0;

    printf("\nUcitaj cijeli broj:");
    scanf("%d", &a);
 
    while (a>0)
    {
        zbr=zbr+a;
        brojac++;

        printf("\nUcitaj broj:");
        scanf("%d", &a);
    }

    printf("\n%d parnih brojeva a zbroj je %d", brojac, zbr);

   
}
	
