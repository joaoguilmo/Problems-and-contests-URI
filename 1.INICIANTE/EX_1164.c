#include<stdio.h>

main()
{
	int x,i,j,soma,valor;
	scanf("%d",&x);
	for(i=0;i<x;i++)
		{
			soma =0;
			scanf("%d",&valor);
			for(j=1;j<valor;j++)
				{
					if(valor%j ==0)
						{
							soma +=j;
						}
				}
			if(soma == valor)
			printf("%d eh perfeito\n",valor);
			else
			printf("%d nao eh perfeito\n",valor);
		}
	return 0;
}
