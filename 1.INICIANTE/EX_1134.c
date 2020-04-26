#include<stdio.h>

int i,alcool=0,gasolina=0,diesel=0;

main()
{
	do
	{
		scanf("%d",&i);
		if(i == 1)
			{
				alcool++;
			}
		else if(i == 2)
				{
					gasolina++;
				}
			else if( i == 3)
					{
						diesel++;
					}
		
	}while(i!=4);
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alcool);
	printf("Gasolina: %d\n",gasolina);
	printf("Diesel: %d\n",diesel);
	return 0;
}
