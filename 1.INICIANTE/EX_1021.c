#include <stdio.h>

float valor;
int aux;

main()
{
	
	scanf("%f",&valor);
	aux = valor/100;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",aux);
	valor = valor-aux*100;
	aux = valor/50;	
	printf("%d nota(s) de R$ 50.00\n",aux);
	valor = valor-aux*50;
	aux = valor/20;
	printf("%d nota(s) de R$ 20.00\n",aux);
	valor = valor-aux*20;
	aux = valor/10;
	printf("%d nota(s) de R$ 10.00\n",aux);
	valor = valor-aux*10;
	aux = valor/5;
	printf("%d nota(s) de R$ 5.00\n",aux);
	valor = valor-aux*5;
	aux = valor/2;
	printf("%d nota(s) de R$ 2.00\n",aux);
	printf("MOEDAS:\n");
	valor = valor - aux*2;
	aux = valor;
	printf("%d moeda(s) de R$ 1.00\n",aux);
	valor = valor- aux;
	valor = valor*100;
	aux = valor/50;
	printf("%d moeda(s) de R$ 0.50\n",aux);
	valor = valor - aux*50;
	aux = valor/25;
	printf("%d moeda(s) de R$ 0.25\n",aux);
	valor = valor - aux*25;
	aux = valor/10;
	printf("%d moeda(s) de R$ 0.10\n",aux);
	valor = valor - aux*10;
	aux = valor/5;
	printf("%d moeda(s) de R$ 0.05\n",aux);
	valor = valor - aux*5;
	printf("%.0f moeda(s) de R$ 0.01\n",valor);
	return 0;
}
