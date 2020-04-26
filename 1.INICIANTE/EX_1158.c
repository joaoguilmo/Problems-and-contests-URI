#include<stdio.h>

int n,x,y,soma=0,i,j,count=0;

main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			scanf("%d %d",&x,&y);
			for(j=x;j<=(x+(2*y));j++)
				{
					
					if((j%2 != 0 )&& (count<y))
						{
							count++;
							soma = soma + j;
						}
				}
			printf("%d\n",soma);
			soma =0;
			count =0;
		}
}
