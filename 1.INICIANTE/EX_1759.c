#include<stdio.h>

main()
{
	unsigned int N,i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		{
			if(i!=(N-1))
				{
					printf("Ho ");
				}
			else
				{
					printf("Ho!\n");
				}
		}
}
