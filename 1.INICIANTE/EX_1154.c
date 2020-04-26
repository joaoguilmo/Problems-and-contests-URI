#include<stdio.h>

int i, valor, count;
float media;

main()
{
	while(valor>=0)
		{
			scanf("%d",&valor);
			if(valor>=0)
				{
					count++;
					media = media +valor;
				}
		}
	media = media/count;
	printf("%.2f\n",media);
}
