#include <stdio.h>

float n1, n2, n3, n4, media, exame;

main()
{
	scanf("%f %f %f %f",&n1 ,&n2 ,&n3 ,&n4);
	media = 0.2*n1 + 0.3*n2 + 0.4*n3 + 0.1*n4;
	if (media >=7)
	{
		printf("Media: %.1f\n",media);
		printf("Aluno aprovado.\n");
	}
	else if(media <5)
	{
		printf("Media: %.1f\n",media);
		printf("Aluno reprovado.\n");		
	}
	else 
	{
		printf("Media: %.1f\n",media);
		printf("Aluno em exame.\n");
		if((media>=5)&&(media<=6.9))
		{	
		scanf("%f",&exame);	
		}
		printf("Nota do exame: %.1f\n",exame);
		media = (media+exame)/2;
		if (media>=5)
			{
				printf("Aluno aprovado.\n");	
			}
		else
			{
				printf("Aluno reprovado.\n");
			}
		printf("Media final: %.1f\n",media);		
	}
	return 0;
}
