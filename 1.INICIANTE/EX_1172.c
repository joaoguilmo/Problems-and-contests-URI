#include<stdio.h>
int x[10],i,n;

main()
{
	for(i=0;i<10;i++)
		{
			scanf("%d",&n);
			if(n>0)
				{
					x[i]=n;
				}
			else
				{
					x[i]=1;
				}
		}
	for(i=0;i<10;i++)
		{
			printf("X[%d] = %d\n",i,x[i]);
		}
}
