#include <stdio.h>
#include <math.h>		//quando utilizar a lib math.h para pow utilizar a lib stdlib.h para nao dar erro no uri
#include<stdlib.h>

double A,B,C,area, perimetro;

main()
{
	scanf("%lf %lf %lf",&A ,&B ,&C);
	perimetro = A+B+C;
	area = ((A+B)*C)/2;
	if ((A>0)&&(B>0)&&(C>0))
	{
		if((abs(B-C)<A)&&(A<(B+C)))
		{
			printf("Perimetro = %.1lf\n",perimetro);
		}
	else if((abs(A-C)<B)&&(B<(A+C)))
			{
				printf("Perimetro = %.1lf\n",perimetro);
			}
			else if((abs(A-B)<C)&&(C<(A+B)))
					{
						printf("Perimetro = %.1lf\n",perimetro);
					}
					else
						{
							printf("Area = %.1lf\n",area);				
						}
	
	}
				
	return 0;
}
