#include<stdio.h>

int i,n,j,count=0;

main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			
			for(j=0;j<=3;j++)
				{
					count++;
					if(j!=3)
						{
							printf("%d ",count);
						}
					else
						{
							printf("PUM\n");
						}
				}
		//count++;
		}
	return 0;
}
