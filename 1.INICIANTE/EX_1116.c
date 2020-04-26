#include<stdio.h>


main()
{
	int n,i;
	float x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			scanf("%f %f",&x,&y);
			if(y!=0)
				{
					printf("%.1f\n",x/y);
				}
			else
				{
					printf("divisao impossivel\n");
				}
		}
}
