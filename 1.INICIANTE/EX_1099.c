#include<stdio.h>

int n,x,j,y,i,soma=0,aux;

main()
{
	scanf("%d",&n);
	for(j=0;j<n;j++)
		{
			soma=0;
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
	
	}
		return 0;
}
