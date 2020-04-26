#include<stdio.h>

int i;
double valor=1;

main()
{
	for(i=2;i<=100;i++)
		{
			valor = valor +1.0/i;
		}
	printf("%.2lf\n",valor);
}
