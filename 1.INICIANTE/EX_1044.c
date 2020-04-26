#include <stdio.h>

int A,B;
main()
{
	scanf("%d %d",&A ,&B);
/*	if((A==0)||(B==0))
	{
	printf("Nao sao Multiplos\n");	
	}
	else if (A>B)
			{
			if((A%B) == 0)
				{
					printf("Sao Multriplos\n");
				}
			else
				{
					printf("Nao sao Multiplos\n");
				}
			}
		else 
			{
				if((B%A) == 0)
					{
					printf("Sao Multriplos\n");
					}
				else
					{
					printf("Nao sao Multiplos\n");
					}
			
			}
			*/
	if (B % A == 0 || A % B == 0)
  printf("Sao Multiplos\n");
else 
  printf("Nao sao Multiplos\n");
	return 0;
}
