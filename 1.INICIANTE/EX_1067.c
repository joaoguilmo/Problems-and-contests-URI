#include<stdio.h>

int N,i;

main()
{
	scanf("%d",&N);
	for(i=0;i<=N;i++)
		{
			if((i%2)!=0)
				{
					printf("%d\n",i);
				}
		}
	return 0;
}
