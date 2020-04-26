#include<stdio.h>

int i, n,j=6;

main()
{
	scanf("%d",&n);
	for(i=n;i<(n+j);i++)
		{
			if((i%2)!=0)
				{
					printf("%d\n",i);
				}
			else
				{
					j++;
				}
		}
	return 0;
}
