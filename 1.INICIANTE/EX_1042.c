#include <stdio.h>

int A,B,C, aux1, aux2, aux3;
int aux;
main()
{
	scanf("%d %d %d",&A ,&B ,&C);
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
	printf("%d\n",aux3);
	printf("%d\n",aux2);
	printf("%d\n",aux1);
	printf("\n");	
	printf("%d\n",A);
	printf("%d\n",B);
	printf("%d\n",C);
	return 0;
	
}


