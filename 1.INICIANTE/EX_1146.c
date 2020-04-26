#include<stdio.h>

int a,i;

main()
{
	scanf("%d",&a);
	while(a!=0)
		{
			for(i=1;i<=a;i++)
				{
					if(i!=a)
					printf("%d ",i);
					else if(i==a)
							printf("%d\n",i);
				}
		
			scanf("%d",&a);	
		}
	return 0;
}
