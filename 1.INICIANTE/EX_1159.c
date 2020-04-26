#include<stdio.h>

int n,i,soma =0;

main()
{
	scanf("%d",&n);
	while(n!=0)
		{
			for(i=n;i<(n+10);i++)
				{
					if(i%2 == 0)
						{
							soma = soma + i;
						}
				}
			printf("%d\n",soma);
			soma =0;
			scanf("%d",&n);	
		}
	
}
