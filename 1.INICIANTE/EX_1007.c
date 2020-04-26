#include<stdio.h>

int A=0, B=0, C=0, D=0, DIFERENCA;

main()
{
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&D);
	DIFERENCA = (A*B-C*D);
	printf("DIFERENCA = %d\n",DIFERENCA);
	return 0;
	
}
