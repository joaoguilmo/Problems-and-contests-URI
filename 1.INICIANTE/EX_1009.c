#include<stdio.h>

char NOME[99];
double TOTAL = 0, SALARIO = 0, VENDAS = 0;

main()
{
	scanf("%s",NOME);
	scanf("%lf",&SALARIO);
	scanf("%lf",&VENDAS);
	TOTAL = SALARIO+0.15*VENDAS;
	printf("TOTAL = R$ %.2lf\n",TOTAL);
	return 0;
	
}
