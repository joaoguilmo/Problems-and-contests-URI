#include<stdio.h>

int x=1,y=1,i,aux;

main()
{
	scanf("%d %d",&x ,&y);
	while((x!=y)) 
	{
		if(y<x)
			{
				printf("Decrescente\n");
			}
		else
			{
				printf("Crescente\n");
			}
		scanf("%d %d",&x ,&y);
	}
	return 0;
}
