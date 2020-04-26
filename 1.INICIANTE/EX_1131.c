#include<stdio.h>

int g,i,condicao=1,total_g,total_i,total_empate,qtd_jogos;

main()
{
	
	while(condicao!=2)
	{
		if(condicao ==1)
			{
				scanf("%d %d",&i,&g);	
				qtd_jogos++;
				if(i>g)
					{
						total_i++;
					}
				else if(g>i)
						{
							total_g++;
						}
					else
						{
							total_empate++;
						}
			}
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d",&condicao);
	}
	printf("%d grenais\n",qtd_jogos);
	printf("Inter:%d\n",total_i);
	printf("Gremio:%d\n",total_g);
	printf("Empates:%d\n",total_empate);
	if(total_i>total_g)
		{
			printf("Inter venceu mais\n");
		}
	else
		{
			printf("Gremio venceu mais\n");
		}
	return 0;
}
