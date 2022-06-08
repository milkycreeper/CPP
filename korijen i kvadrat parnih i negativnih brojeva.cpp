#include <stdio.h>
#include <math.h>
 
int main(){
	
	int a,kva;
    float kor;

    printf("\nUcitaj prvi broj:");
    scanf("%d", &a);
    
    while(a>0)
    {
        if(a%2 == 0)
        {
            kor = sqrt((float) a);
            printf("\nKorijen broja %d je %.2f", a, kor);
        }   
        else
        {
		kva=a*a;
    
            printf("\nKvadrat broja %d je %d", a, kva);
        }
        printf("\nUpisi sljedeci broj:");
        scanf("%d", &a);
    }
	
	
	
	
	
	
	
	
	
}