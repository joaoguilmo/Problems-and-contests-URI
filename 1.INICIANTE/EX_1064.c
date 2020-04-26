#include <stdio.h>

float x[6], aux=0;
int i, count=0;
main()
{
	for(i=0;i<6;i++)
		{
			scanf("%f",&x[i]);
			if(x[i]>0)
				{
					aux = aux+x[i];
					count++;
				}
		}
	aux = aux/count;
	printf("%d valores positivos\n",count);
	printf("%.1f\n",aux);
	
}
