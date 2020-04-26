#include<stdio.h>

int NUMBER=0, H=0;
float SALARY = 0, valor = 0;

main()
{
	scanf("%d",&NUMBER);
	scanf("%d",&H);
	scanf("%f",&valor);
	SALARY = H*valor;
	printf("NUMBER = %d\n",NUMBER);
	printf("SALARY = U$ %.2f\n",SALARY);
	return 0;
	
}
