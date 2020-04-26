#include<stdio.h>

int n,i;
long int x;

void verifica_sinal(long int x)
{
	if(x>0)
		{
			printf("POSITIVE\n");
		}
	if(x<0)
		{
			printf("NEGATIVE\n");
		}
}

main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			scanf("%ld",&x);
			if((x%2 == 0)&&(x!=0))
				{
					printf("EVEN ");
					verifica_sinal(x);
				}
			else if((x%2 !=0)&&(x!=0))
					{
						printf("ODD ");
						verifica_sinal(x);							
					}
				else
					{
						printf("NULL\n");
					}
		}
	return 0;
}
