#include<stdio.h>

main()
{
	int i;
	double valor,x[100];
	scanf("%lf",&valor);
	x[0]=valor;
	for(i=0;i<=99;i++)
		{
			if(i==0)
			{
				printf("N[%d] = %.4lf\n",i,x[i]);
			}
			else
			{
			x[i]=x[i-1]/2.0;
			printf("N[%d] = %.4lf\n",i,x[i]);	
			}
			
		}
}
