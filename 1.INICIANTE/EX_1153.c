#include<stdio.h>

int n,i,valor=1;

main()
{
	scanf("%d",&n);
	if(n==0)
		{
			printf("1\n");
		}
	else
		{
			
			for(i=1;i<=n;i++)
				{
				valor = valor*i;
				}
			printf("%d\n",valor);
		}
}
