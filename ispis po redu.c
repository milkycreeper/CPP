#include <stdio.h>

int main(){

    int i;
    int temp;
    int a[4];

    for(i=0;i<4;i++){
        printf("Unesi broj:");
        scanf("%d", &a[i]);
    }
    for(i=0;i<3;i++){
        if(a[i]>a[i+1]){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
        }

  for(i=0;i<4;i++){
printf("%d", a[i]);
  }



return 0;



}
