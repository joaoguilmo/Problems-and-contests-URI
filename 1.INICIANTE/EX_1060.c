#include <stdio.h>

float x[6];
int i, count=0;
main()
{
	for(i=0;i<6;i++)
		{
			scanf("%f",&x[i]);
			if(x[i]>0)
				{
					count++;
				}
		}
	printf("%d valores positivos\n",count);
	return 0;
	
}
