#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){

    char odabir[8];
    int nestojeodabrano=1;
    float sum=0;
    int i;

    while(nestojeodabrano){
    //system("cls");
    printf("1. Kava: 120kn\n");
    printf("2. Sladoled: 1,5kn\n");
    printf("3. Govno: 25kn\n");
    printf("4. Krofna: 1500kn\n");
    printf("Za prestanak unosa unesite bilo sto drugo!");

    scanf("%s", odabir);

    for(i=0;odabir[i]!='\0';i++)
        odabir[i]=tolower(odabir[i]);

    if(!strcmp(odabir,"kava")|!strcmp(odabir,"1")) sum+=120;
    else if (!strcmp(odabir,"sladoled")|!strcmp(odabir,"2")) sum+=1.5;
    else if (!strcmp(odabir,"govno")|!strcmp(odabir,"3")) sum+=25;
    else if (!strcmp(odabir,"kforna")|!strcmp(odabir,"4")) sum+=1500;
    else nestojeodabrano=0;
}
printf("Ukupan promet danas iznosi %.2f", sum);
}
