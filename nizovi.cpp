#include <stdio.h>

int main(){
	
	int n;   //broj elemenata niza
	
	printf("Unesi broj el. niza: ");
	scanf("%d", &n);
	
	int a[n], b[n], c[n], i;
	
	printf("1. niz\n");
	for(i=0;i<n;i++){   //unos el. u 1. niz
		printf("Unesi %d el.: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("2. niz\n");
	for(i=0;i<n;i++){   //unos el. u 2. niz
		printf("Unesi %d el.: ",i+1);
		scanf("%d", &b[i]);	
	}
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++){  
		printf("%d ",c[i]);
	
}}