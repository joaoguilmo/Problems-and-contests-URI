#include<stdio.h>

int x, soma=0,count=0, i,y,flag=1,interacoes=0;

main()
{
	scanf("%d",&x);
	do
	{
		scanf("%d",&y);
		if(y<=x)
			{
				flag = 0;
			}
		else
			{
				flag =1;
				for(i=0;i<=(y-x);i++)
					{
						soma = soma + x + i;
						count++;
						if(soma > y)
							{
								interacoes = count;
								i = y;
							}
					}
			}
	}while(flag ==0);
	printf("%d\n",interacoes);
}
