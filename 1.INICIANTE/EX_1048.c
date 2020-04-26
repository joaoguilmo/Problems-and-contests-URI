#include<stdio.h>

float salario, novosalario;

main()
{
	scanf("%f",&salario);
	if((salario>=0)&&(salario<=400))
	{
		
		novosalario = salario + salario*.15;
		printf("Novo salario: %.2f\n",novosalario);
		printf("Reajuste ganho: %.2f\n",novosalario-salario);
		printf("Em percentual: 15 %%\n");
	}
	else if((salario>=400.01)&&(salario<=800.00))
	{
		
		novosalario =salario + salario*.12;
		printf("Novo salario: %.2f\n",novosalario);
		printf("Reajuste ganho: %.2f\n",novosalario-salario);
		printf("Em percentual: 12 %%\n");
	}
	else if((salario>=800.01)&&(salario<=1200.00))
	{
		
		novosalario = salario + salario*.10;
		printf("Novo salario: %.2f\n",novosalario);
		printf("Reajuste ganho: %.2f\n",novosalario-salario);
		printf("Em percentual: 10 %%\n");
	}
	else if((salario>=1200.01)&&(salario<=2000.00))
	{
		
		novosalario = salario + salario*.07;
		printf("Novo salario: %.2f\n",novosalario);
		printf("Reajuste ganho: %.2f\n",novosalario-salario);
		printf("Em percentual: 7 %%\n");
	}
	else
	{
		novosalario =salario + salario*.04;
		printf("Novo salario: %.2f\n",novosalario);
		printf("Reajuste ganho: %.2f\n",novosalario-salario);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}
