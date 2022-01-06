#include <stdio.h>
#include <math.h>


float dolari(float kune);
float euri(float kune);

int main(){
    float kune,E,D;


    printf("Unesi iznos kuna:\n");
    scanf("%f", &kune);

    E= euri(kune);
    D= dolari(kune);
    printf("%.2f kuna iznosi %.2f u eurima",kune,E);
    printf("%.2f kuna iznosi %.2f u dolarima",kune,D);
    return 0;



}
float dolari(float kune){
    return kune/6.53;
}

float euri(float kune){
    return kune/7.5;
}
