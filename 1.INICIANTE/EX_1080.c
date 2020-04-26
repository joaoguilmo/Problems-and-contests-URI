#include<stdio.h>

int i,x,posicao,maior=0;

main()
{
	for(i=1;i<=100;i++)
		{
			scanf("%d",&x);
			if(x>maior)
				{
					maior = x;
					posicao = i;
				}
		}
	printf("%d\n%d\n",maior,posicao);
	return 0;
}
