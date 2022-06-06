#include <stdio.h>

int main(){
	
	int a[5],i;   //deklaracija niz
	//unos elemenata
	for(i=0;i<5;i++){
		printf("Unesi %d. element: ", i+1);
		scanf("%d", &a[i]);
	}
	//ispis elemenata
	for(i=0;i<=4;i++)
		printf("\n%d", a[i]);
	
	
	
	
	
	
	
}