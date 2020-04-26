#include<stdio.h>

main()
{
	int n[1000],i,j=0,valor,x;
	scanf("%d",&x);
	for(i=0;i<1000;i++)
		{
			
			if(j==(x))
				{
					j=0;
				}
			n[i]=j;
			printf("N[%d] = %d\n",i,n[i]);
			j++;
		}
}
