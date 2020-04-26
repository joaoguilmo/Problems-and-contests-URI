#include<stdio.h>

long int i,j,n;
main()
{
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
		{
			printf("%ld %ld %ld\n",i,i*i, i*i*i);
			printf("%ld %ld %ld\n",i, j = i*i+1, i*i*i+1);
		}
	return 0;
}
