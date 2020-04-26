#include<stdio.h>

int n,i,quantia,coelhos=0, ratos=0, sapos=0,total=0;
char tipo;
float p_c, p_r, p_s;
main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			scanf("%d %s",&quantia,&tipo);
			if(tipo == 'C')
				{
					coelhos = coelhos +quantia;
				}
			else if(tipo == 'R')
				{
					ratos = ratos +quantia;
				}
				else
					{
						sapos = sapos +quantia;
					}
					
		}
	total = coelhos + ratos + sapos;
	p_c = coelhos*100.00/total;
	p_r = ratos*100.00/total;
	p_s = sapos*100.00/total;
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",coelhos);
	printf("Total de ratos: %d\n",ratos);
	printf("Total de sapos: %d\n",sapos);
	printf("Percentual de coelhos: %.2f %%\n",p_c);
	printf("Percentual de ratos: %.2f %%\n",p_r);
	printf("Percentual de sapos: %.2f %%\n",p_s);
	return 0;
}
