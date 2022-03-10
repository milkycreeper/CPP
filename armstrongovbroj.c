#include <stdio.h>
#include <math.h>

int main(){

   int trobroj;
   int a;
   int b;
   int c;

    printf(" Unesi neki troznamenkasti broj:\n");
    scanf("%d", &trobroj);

    printf(" Unesi prvu znamenku troznamenkastog broja:\n");
    scanf("%d", &a);

    printf(" Unesi drugu znamenku troznamenkastog broja:\n");
    scanf("%d", &b);

    printf(" Unesi trecu znamenku troznamenkastog broja:\n");
    scanf("%d", &c);

a=trobroj/100;
b=trobroj/10;
b=b-(10*a);
c=trobroj-(100*a)-(b*10);
if (trobroj==(a*a*a)+(b*b*b)+(c*c*c))
printf("%d je Armstrongov broj",trobroj);
else
printf("%d nije Armstrongov broj",trobroj);

return 0;




}
