#include <stdio.h>
#include <stdlib.h>

float x[5];
int i, count_par=0, count_impar=0, count_positivo=0, count_negativo=0;
main()
{
	for(i=0;i<5;i++)
		{
			scanf("%f",&x[i]);
			if((abs(x[i])%2)==0)
				{
					count_par++;
				}
			else if((abs(x[i])%2)!=0)
					{
						count_impar++;
					}
			if(x[i]>0)
				{
					count_positivo++;	
				}
			if(x[i]<0)
				{
					count_negativo++;	
				}	
		}
	printf("%d valor(es) par(es)\n",count_par);
	printf("%d valor(es) impar(es)\n",count_impar);
	printf("%d valor(es) positivo(s)\n",count_positivo);
	printf("%d valor(es) negativo(s)\n",count_negativo);
	
	return 0;
}


