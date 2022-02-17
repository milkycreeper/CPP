#include <stdio.h>
#include <math.h>

int main(){

    int d;
    int m;
    int g;
    int n;

    printf("Unesi dan datuma:\n");
    scanf("%d", &d);

    printf("Unesi mjesec datuma:\n");
    scanf("%d", &m);

    printf("Unesi godinu:\n");
    scanf("%d", &g);

    printf("Unesi redni broj dana u tjednu:\n");
    scanf("%d", &n);

    int kojiJeOvoBozjiDan=(n-1+d)%7;

    switch(kojiJeOvoBozjiDan){
    case 1:
    printf("Bozji Ponedjeljak");
    break;
    case 2:
    printf("Bozji Utorak");
    break;
    case 3:
    printf("Bozija Srijeda");
    break;
    case 4:
    printf("Bozji Cetvrtak");
    break;
    case 5:
    printf("Bozji Petak");
    break;
    case 6:
    printf("Bozija Subota");
    break;
    case 0:
    printf("Bozija Nedjelja");
    break;
    }




}
