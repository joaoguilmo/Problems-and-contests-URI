#include<stdio.h>

main()
{
	int x[20],i,j=0;
	for(i=0;i<20;i++)
		{
			scanf("%d",&x[i]);
		}
	for(i=19;i>=0;i--)
		{
			
			printf("N[%d] = %d\n",j,x[i]);
			j++;
		}
}
