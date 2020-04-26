#include <stdio.h>
#include <math.h>

double A,B,C,aux1,aux2,aux3;
int aux=0, aux_0=0;
main()
{
	scanf("%lf %lf %lf",&A ,&B ,&C);
	aux1 = A;
	aux2 = B; 
	aux3 = C;
	if(A>=B)
		{
			if(A>=C)
				{
					aux1 = A;
					if(B>=C)
						{
							aux2 = B;
							aux3 = C;
						}
					else
						{
							aux2 = C;
							aux3 = B;
						}
				}
			else 
				{
					aux1 = C;
					aux2 = A;
					aux3 = B;
				}
		}
	else 
		{
			if(B>=C)
				{
					aux1 = B;
					if(A>=C)
						{
							aux2 = A;
							aux3 = C;
						}
					else 
						{
							aux2 = C;
							aux3 = A;
						}
				}
			else
				{
					aux1 = C;
					aux2 = B;
					aux3 = A;
				}
		}
	A = aux1;
	B = aux2;
	C = aux3;
	if(A>=(B+C))
	{
		printf("NAO FORMA TRIANGULO\n");
		aux_0=1;	
	}
	if(pow(A,2)==(pow(B,2)+pow(C,2)))
	{
		printf("TRIANGULO RETANGULO\n");
	}
	if((pow(A,2)>(pow(B,2)+pow(C,2)))&&(aux_0!=1))
	{
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if(pow(A,2)<(pow(B,2)+pow(C,2)))
	{
		printf("TRIANGULO ACUTANGULO\n");
	}
	if((A==B)&&(B==C))
	{
		printf("TRIANGULO EQUILATERO\n");
		aux=1;
	}
	if(((A==B)||(A==C)||(B==C))&&(aux!=1))
	{
		printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}






