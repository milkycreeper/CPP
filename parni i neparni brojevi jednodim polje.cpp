#include <stdio.h>

int main(){
	
	int x[10]= {1,9,8,7,6,12,5,3,2,4};
	int xp[10]= {0}, xn[10]={0};
	int i, bp=0, bn=0;
	
	for (i=0;i<10;i++){
		if(x[i]%2==0){
			xp[bp]=x[i];    //ako je element parni spremi u xp
			bp++;
		}
		else{
			xn[bn]=x[i];    //ako element nije parni spremi u xn
			bn++;
		}
	}
	printf("\nParni: ");
	for(i=0; i<bp; i++)
		printf("%d ", xp[i]);
	printf("\nNeparni: ");
	for(i=0; i<bn; i++)
		printf("%d ", xn[i]);
	return 0;
}