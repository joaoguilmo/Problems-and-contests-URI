#include<stdio.h>

int i,n,j;
float x,aux;

main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			for(j=0;j<3;j++)
				{
					scanf("%f",&x);
					if(j==0)
						{
							aux = x*0.2;
						}
					else if(j ==1)
							{
								aux = aux + x*0.3;
							}
						else
							{
								aux = aux + x*0.5;
							}
				}
			printf("%.1f\n",aux);
		}
	return 0;
}
