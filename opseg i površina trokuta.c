#include <stdio.h>
#include <math.h>

int main(){

    char x;
    float a, opseg, p;

    printf("Unesi slovo O (opseg) ili P (povrsina):\n");
    scanf("%c", &x);

    printf("Unesi duljinu stranice jednakostranicnog trokuta:\n");
    scanf("%f", &a);

    switch(x){
    case 'O': case 'o':
        opseg = 3*a;
        printf("Opseg iznosi:%.2f", opseg);
        break;
    case 'P': case 'p':
        p=(pow(a,2)*sqrt(3))/4;
        printf("povrsina iznosi:%.2f", p);
        break;
    default:
        printf("Ne postoji znak");
    }







}
