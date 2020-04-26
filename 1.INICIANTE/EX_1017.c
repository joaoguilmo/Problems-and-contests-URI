#include <stdio.h>

int tempo, velocidade;
float distancia,litros;

main()
{
	scanf("%d",&tempo);
	scanf("%d",&velocidade);
	distancia = velocidade*tempo;
	litros = distancia/12.0;
	printf("%.3f\n",litros);
	return 0;
}
