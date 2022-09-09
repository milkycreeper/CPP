#include<stdio.h>

int main(){

    int c1;
    int c2;

    printf("Unesi prvu cijenu tvrtke: ");
    scanf("%d", &c1);
    printf("\nUnesi drugu cijenu tvrtke: ");
    scanf("%d", &c2);

    if(c1<c2){
        printf("Izabrali ste prvu tvrtku.", c1);}
    else{
        printf("Izabrali ste drugu tvrtku.", c2);
    }








}
