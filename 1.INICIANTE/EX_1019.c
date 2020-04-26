#include <stdio.h>

long int N, segundos, minutos, horas;

main()
{
	scanf("%d",&N);
	horas = N/3600;
	minutos = (N-horas*3600)/60;
	segundos = (N-minutos*60 - horas*3600);
	printf("%d:%d:%d\n",horas,minutos,segundos);
	return 0;
}	
