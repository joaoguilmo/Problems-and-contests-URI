#include<stdio.h>
#include<string.h>

main()
{
	int i,j,l=1,z=11;
	double m[12][12],soma=0,media=0,qtd=0;
	char O[1],a[]="S", B[]="M";
	
	scanf("%s",&O);
	for(i=0;i<12;i++)
		{
			for(j=0;j<12;j++)
				{
					scanf("%lf",&m[i][j]);
				}
		}
	if(!(strcmp(a,O)))
		{
			for(i=0;i<5;i++)
				{
					
					for(j=l;j<z;j++)
						{
							soma = soma+m[i][j];	
						
						}
					z--;
					l++;
						
				}
			printf("%.1lf\n",soma);	
		}
	else if(!strcmp(O ,B))
			{
				for(i=0;i<5;i++)
					{
						for(j=l;j<z;j++)
							{
								soma = soma+m[i][j];	
								qtd++;
							}
						z--;
						l++;
						
					}
					media = soma/(qtd);				
					printf("%.1lf\n",media);
			}
	return 0;
	
}
