#include <stdio.h>
#include <math.h>

int main(){

    int sum=0, n;

    for(int i=10; i>0; i--){
        scanf("%d", &n);
        sum+=n;

    }
    printf("Ukupno:%d\n", sum);
    printf("prosjecno:%f",(float)sum/10);





}
