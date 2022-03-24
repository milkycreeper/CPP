#include<stdio.h>
#include<math.h>

int main(void){

    int n;
    
    
    do{
        printf("Unesi neki broj:\n");
        scanf("%d", &n);
        if(n<0)
            printf("nista\n");
        if(n==0)
            printf("0");
      } while (n<0);

    for(int a=1; a<=n; a++){
        for(int b=0; b<a; b++)
            printf("%d", a);
        printf("\n");
        }



}












