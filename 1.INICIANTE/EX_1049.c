#include<stdio.h>
#include<string.h>
char nome1[99], nome2[99], nome3[99];

main()
{
	scanf("%s",&nome1);
	//printf("%s",nome1);
	scanf("%s",&nome2);
	scanf("%s",&nome3);
	//printf("%d",!!(strcmp(nome1,"vertebrado\n")));
	if(!(strcmp(nome1,"vertebrado")))
	{
		if(!(strcmp(nome2,"ave")))
			{
				if(!(strcmp(nome3,"carnivoro")))
					{
					printf("aguia\n");
					}
				else
					{
					printf("pomba\n");	
					}
			}
		else
			{
				if(!(strcmp(nome3 , "onivoro")))
					{
						printf("homem\n");
					}
				else
					{
						printf("vaca\n");
					}
			}	
	}
	else
	{
		if(!(strcmp(nome2,"inseto")))
			{
				if(!(strcmp(nome3 ,"hematofago")))
					{
						printf("pulga\n");
					}
				else
					{
						printf("lagarta\n");
					}
			}
		else
			{
				if(!(strcmp(nome3 ,"hematofago")))
					{
						printf("sanguessuga\n");	
					}
				else
					{
						printf("minhoca\n");
					}	
			}	
	}
	return 0;
}





