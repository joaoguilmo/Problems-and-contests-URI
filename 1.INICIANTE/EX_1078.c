#include<stdio.h>

int i,n;

main()
{
	scanf("%d",&n);
	for(i=1;i<=10;i++)
		{
			printf("%d x %d = %d\n",i,n,i*n);
		}
	return 0;
}
