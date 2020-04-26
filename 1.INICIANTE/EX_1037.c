#include <stdio.h>

float x;

main()
{
	scanf("%f",&x);
	if((x <= 25.0)&&(x>=0))
	{
		printf("Intervalo [0,25]\n");
	}
	else if((x <= 50.0)&&(x>0))
	{
		printf("Intervalo (25,50]\n");
	}
	else if((x <= 75.0)&&(x>0))
	{
		printf("Intervalo (50,75]\n");
	}
	else if((x <= 100.0)&&(x>0))
	{
		printf("Intervalo (75,100]\n");
	}
	else 
	{
		printf("Fora de intervalo\n");
	}
	return 0;
}
