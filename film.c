#include <stdio.h>
#include <math.h>

int main(){

    int T;
    int H1;
    int M1;
    int S1;
    int H2;
    int M2;
    int S2;

    printf("Unesi trajanje reklama i vrijeme pocetka i kraja filma (H:M:S)\n");
    scanf("%d %d %d %d %d %d %d", &T,&H1,&M1,&S1,&H2,&M2,&S2);

    int timeSec=H2*3600+M2*60+S2-S1-M1*60-H1*3600-T*60;

    int H=timeSec/3600;
    int M=(timeSec%3600)/60;
    int S=timeSec%60;

    printf("%d\n", timeSec);
    printf("%d : %d : %d\n", H,M,S);


}
