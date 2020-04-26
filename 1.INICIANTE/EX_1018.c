#include <stdio.h>

int valor,aux;

main()
{
	scanf("%d",&valor);
	aux = valor/100;
	printf("%d\n",valor);
	printf("%d nota(s) de R$ 100,00\n",aux);
	valor -=aux*100;
	aux = valor/50;
	printf("%d nota(s) de R$ 50,00\n",aux);
	valor -=aux*50;
	aux = valor/20;
	printf("%d nota(s) de R$ 20,00\n",aux);
	valor -=aux*20;
	aux = valor/10;
	printf("%d nota(s) de R$ 10,00\n",aux);
	valor -=aux*10;
	aux = valor/5;
	printf("%d nota(s) de R$ 5,00\n",aux);
	valor -=aux*5;
	aux = valor/2;
	printf("%d nota(s) de R$ 2,00\n",aux);
	valor -=aux*2;
	printf("%d nota(s) de R$ 1,00\n",valor);
	return 0;
	
}
