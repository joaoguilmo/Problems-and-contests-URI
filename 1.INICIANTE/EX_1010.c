#include<stdio.h>

int p1=0, qtd_p1=0, p2=0, qtd_p2=0;
float valor_p1 = 0, valor_p2=0, total=0;

main()
{
	scanf("%d %d %f",&p1, &qtd_p1, &valor_p1);
	scanf("%d %d %f",&p2, &qtd_p2, &valor_p2);
	total = qtd_p1*valor_p1 + qtd_p2*valor_p2;
	printf("VALOR A PAGAR: R$ %.2f\n",total);
	return 0;
	
}
