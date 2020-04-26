#include<stdio.h>

int x=1,y=1,i,soma,aux;

main()
{
	scanf("%d %d",&x ,&y);
	while((x!=0)&&(y!=0)&&(x>0)&&(y>0)) 
	{
		soma = 0;
		if(y<x)
			{
				aux = x;
				x = y;
				y = aux;
			}
		for(i=x;i<=y;i++)
			{
				soma = soma+i;
				printf("%d ",i);
			}
		printf("Sum=%d\n",soma);
		scanf("%d %d",&x ,&y);
	}
}
