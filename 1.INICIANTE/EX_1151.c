#include<stdio.h>

int n,i,valor;

main()
{
	scanf("%d",&n);
	int v[n];
	for(i=0;i<n;i++)
		{
			if(i<=1)
				{
					printf("%d ",i);
					v[i]=i;
				}
			else if(i<n-1)
					{
						v[i]=v[i-2]+v[i-1];
						printf("%d ",v[i]);	
					}
				else
					{
						v[i]=v[i-2]+v[i-1];
						printf("%d\n",v[i]);
					}
					
		}
}
