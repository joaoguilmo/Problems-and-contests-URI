#include<stdio.h>

main()
{
	long long int x[61],n,n1;	// para caber inteiro de 64 bits sem sinal
	int i,j;
	x[0]=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		{
			scanf("%lld",&n1);
			for(j=1;j<=n1;j++)
				{
					if(j==1)
						{
							x[j]=1;
						}
					else
						{
							x[j]= x[j-2]+x[j-1];	
						}
					
				}
			printf("Fib(%lld) = %lld\n",n1,x[n1]);
		}
}
