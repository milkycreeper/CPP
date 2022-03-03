#include <stdio.h>
#include <math.h>

int main(){

    printf(" -------------------------------\n");
    printf("|                               |\n");
    printf("|\t 1. Zbrajanje\t\t|\n");
    printf("|\t 2. Oduzimanje\t\t|\n");
    printf("|\t 3. Mnozenje\t\t|\n");
    printf("|\t 4. Dijeljenje\t\t|\n");
    printf("|                               |\n");
    printf(" -------------------------------\n");

    int prvibr;
    int drugibr;
    int odabir;

    scanf("%d",&odabir);
    switch(odabir){
    case 1:
        printf("Unesi prvi broj:\n");
        scanf("%d", &prvibr);
        printf("Unesi drugi broj:\n");
        scanf("%d", &drugibr);
        float rezultat1=prvibr+drugibr;
        printf("Rezultat zbrajanja je: %.0f", rezultat1);
        break;

    case 2:
        printf("Unesi prvi broj:\n");
        scanf("%d", &prvibr);
        printf("Unesi drugi broj:\n");
        scanf("%d", &drugibr);
        float rezultat2=prvibr-drugibr;
        printf("Rezultat oduzimanja je: %.0f", rezultat2);
        break;

    case 3:
        printf("Unesi prvi broj:\n");
        scanf("%d", &prvibr);
        printf("Unesi drugi broj:\n");
        scanf("%d", &drugibr);
        float rezultat3=prvibr*drugibr;
        printf("Rezultat mnozenja je: %.0f", rezultat3);
        break;

    case 4:
        printf("Unesi prvi broj:\n");
        scanf("%d", &prvibr);
        printf("Unesi drugi broj:\n");
        scanf("%d", &drugibr);
        float rezultat4=(float)prvibr/drugibr;
        printf("Rezultat dijeljenja je: %.2f", rezultat4);
        break;

    default:
        printf("Nepostojeci odgovor");
        break;
    }


































}
