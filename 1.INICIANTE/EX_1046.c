#include<stdio.h>

int A, B,aux;

main()
{
	scanf("%d %d",&A ,&B);
	if(A == B)
		{
			aux=24;
			printf("O JOGO DUROU %d HORA(S)\n",aux);
		}
	else if(A>B)
		{
			aux = 24-A+B;
			printf("O JOGO DUROU %d HORA(S)\n",aux);
		}
	else
		{
			aux = B-A;
			printf("O JOGO DUROU %d HORA(S)\n",aux);
		}
	return 0;
}
