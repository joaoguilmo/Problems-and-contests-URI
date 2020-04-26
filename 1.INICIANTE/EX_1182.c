#include<stdio.h>
#include<string.h>

main()
{
	int v_coluna, i,j,x;
	float m[12][12],soma=0,media=0;
	char operacao[1], a[]="S", B[]="M";
	
	scanf("%d",&v_coluna);
	scanf("%s",&operacao);
	for(i=0;i<12;i++)
		{
			for(j=0;j<12;j++)
				{
					scanf("%f",&m[i][j]);
				}
		}
	if(!(strcmp(a,operacao)))
		{
			for(i=0;i<12;i++)
				{
					soma = soma+m[i][v_coluna];
				}
			printf("%.1f\n",soma);	
		}
	else if(!strcmp(operacao ,B))
			{
				for(i=0;i<12;i++)
					{
						soma = soma+m[i][v_coluna];
					}
					media = soma/12.0;				
					printf("%.1f\n",media);
			}
	
}
