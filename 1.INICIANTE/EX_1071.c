#include<stdio.h>

int x,y,i,soma=0,aux;

main()
{
	scanf("%d",&x);
	scanf("%d",&y);
	if((y) < x)
		{
			aux = y;
			y = x;
			x = aux;
		}
		for(i=x+1;i<y;i++)
		{
			if((i%2)!=0)
				{
					soma = soma+i;
				}
		}
	printf("%d\n",soma);		
	return 0;
}
