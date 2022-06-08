
#include <stdio.h>

int main(){
	
	int br, i , zbroj=0, umn=1;
	
	printf("Unesi neki broj: ");
	scanf("%d", &br);
	
	for(i=1; i<=br; i++){
	
		if(i % 2 == 0){
		
			zbroj=zbroj+i;}
			
		else {
		
			umn=umn*i;
		}
		
		}
	
	printf("Zbroj parnih brojeva je: %d\n", zbroj);
	printf("Umnozak neparnih brojeva je: %d", umn);
	
	
	
	
}