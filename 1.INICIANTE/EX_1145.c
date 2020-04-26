#include<stdio.h>

int x,y,i,j;

main()
{
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++)
		{
			j++;
			if(j!=x)
				{
					printf("%d ",i);	
				}
			if(j==x)
				{
					j=0;
					printf("%d\n",i);
				}
		}
	return 0;
}
