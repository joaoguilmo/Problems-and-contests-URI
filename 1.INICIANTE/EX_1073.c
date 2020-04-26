#include<stdio.h>
#include<math.h>
int N,i,valor;

main()
{
	scanf("%d",&N);
	for(i=1;i<=N;i++)
		{
			if(i%2==0)
				{
					valor = pow(i,2);
					printf("%d^2 = %d\n",i,valor);
				}	
		}
	return 0;
}
