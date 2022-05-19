#include <stdio.h>

int main(){

    int i;
    int x[4];

    for(i=0;i<4;i++){
        printf("Unesi broj:");
        scanf("%d", &x[i]);
    }


    for(i=0;i<4;i++){
        printf("%d", x[i]);
    }
    return 0;





}
