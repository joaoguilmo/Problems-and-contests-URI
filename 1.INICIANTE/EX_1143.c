#include<stdio.h>

int i,n,j,count=0,valor=1;

main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			count++;
			for(j=0;j<=2;j++)
				{
					valor = valor*count;
					if(j<=1)
						{
							printf("%d ",valor);
						}
					else
						{
							printf("%d\n",valor);
						}
				}
				valor =1;
		
		}
	return 0;
}
