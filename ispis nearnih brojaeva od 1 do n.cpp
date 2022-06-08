#include <stdio.h>

int main()
	{
		int i, n;
		
		printf("Unesi br: ");
		scanf("%d",&n);
		
		i=1;
		while(i<=n)
			{
				if(i % 2 != 0)				
					{
						printf("%d ",i);
					}
				i++;		
			}
		return 0;
	
	}

	
	
	
	
	
	