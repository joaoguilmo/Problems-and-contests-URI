#include<stdio.h>

int x;

main()
{
	
	do
	{
	
		scanf("%d",&x);	
		if(x!=2002)
			{
				printf("Senha Invalida\n");
			}
		else
			{
				printf("Acesso Permitido\n");
			}
		
		}while(x!=2002);	
	return 0;
}
