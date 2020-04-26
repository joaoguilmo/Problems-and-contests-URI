#include<stdio.h>
#include<string.h>

main()
{
	int i,j,x,l=1;
	float m[12][12],soma=0,media=0,qtd=0;
	char operacao[1],a[]="S", B[]="M";
	
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
					
					for(j=l;j<12;j++)
						{
							soma = soma+m[i][j];	
						}
					l++;	
				}
			printf("%.1f\n",soma);	
		}
	else if(!strcmp(operacao ,B))
			{
				for(i=0;i<12;i++)
					{
						for(j=l;j<12;j++)
							{
								soma = soma+m[i][j];	
								qtd++;
							}
						l++;
					}
					media = soma/qtd;				
					printf("%.1f\n",media);
			}
	
}
