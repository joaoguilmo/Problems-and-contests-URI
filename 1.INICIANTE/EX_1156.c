#include<stdio.h>

int i;
double valor=0,aux=1;

main()
{
	for(i=1;i<=39; i=i+2)
		{
			
			valor = valor +(i)/aux;
			aux = aux*2;			
		}
	printf("%.2lf\n",valor);
}
