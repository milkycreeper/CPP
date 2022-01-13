#include <stdio.h>
#include <math.h>
// (F-32) * 9/5
float celzijev(float fahrenheit);
float kelvin(float celzijev);

int main(){
    float F,C,K;

    printf("Unesi iznos fahrenheita:\n");
    scanf("%f", &F);

    C= celzijev(F);
    K= kelvin(C);


    printf("Temperatura u C stupnjevima iznosi: %.2f C\n",C);
    printf("Temperatura u K stupnjevima iznosi: %.2f K\n",K);
return 0;
}

float celzijev(float fahrenheit){
    return (fahrenheit-32)*9/5;
}

float kelvin(float celzijev){
return celzijev+273.15;
}


