#include<stdio.h>

float x, aux;
main()
{
	scanf("%f",&x);
	if((x>=0)&&(x<=2000))
		{
			printf("Isento\n");
		}
	if((x>=2000.01)&&(x<=3000))
		{
			aux =(x-2000)*0.08;
			printf("R$ %.2f\n",aux); 		
		}
	if((x>=3000.01)&&(x<=4500))
		{
			aux =(x-3000.01)*0.18;
			aux = aux +(3000-2000.01)*0.08;
			printf("R$ %.2f\n",aux);
		}		
	if(x>4500)
		{
			aux =(x-4500)*0.28;
			aux = aux +(4500-3000.01)*0.18;
			aux = aux + (3000-2000.01)*0.08;
			printf("R$ %.2f\n",aux);
		}
	return 0;		
}
