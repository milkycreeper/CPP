#include <stdio.h>

int main(){
    int i;
    int x[5]={16,-3,4,2,10};
    int umn=1;

    for(i=4;i>=0;i--){
       umn=umn*x[i];
    }
printf("Umnozak iznosi: %d", umn);
    return 0;
}
