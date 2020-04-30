#include<stdio.h>
#include<string.h>
#define k 1001


main()
{
	int x,i,j,l,count,b;
	char m[k]="",m1[k]="";
	//fflush(stdin);			// site do URI não aceita fflush(stdin)
	scanf("%d ",&x);
	//fflush(stdin);
	for(i=0;i<x;i++)		
		{
			//fflush(stdin);
		//gets(m);  //	não utilizar gets ou scanf pois pode adicionar null em algumas posições do vetor causando estouro do buffer
			//scanf("%s" ,m);
			fgets( m, k, stdin );
			//fflush(stdin);
			// primeira camada de criptografia(1º regra), desloca 3 casas para direita da tabela asc( apenas para letras minuscula e maiuscula)
			for(j=0;j<=strlen(m);j++)								
				{
					if(((m[j]>=65)&&(m[j]<=90))||((m[j]>=97)&&(m[j]<=122)))
						{
							m[j]=m[j]+3;
						
						}
					//count = j;	
				}
			
			
			//--------------------------------
		/*	//teste da primeira etapa
			for(l=0;l<strlen(m);l++)
			{
			printf("%c",m[l]);	
			}
			printf("\n");
			//--------------------------------			
		*/	
			
			// segunda camada (2º regra), inverter a linha
			l=0;
			for(j=strlen(m)-1;j>=0;j--)								
				{
					m1[l]=m[j];
					l++;
				}
			//m1[count+1]='\n';
			
			
			//--------------------------------
			//teste da segunda etapa		
		/*	for(l=0;l<=count;l++)
				{
				printf("%c",m1[l]);	
				}
			printf("\n");	
		*/
			// Terceira camada (3º regra), a partir da metade do vetor pega cada char e retorna uma casa a esquerda da tabela ascii
			b = (strlen(m))/2;
			if(strlen(m)%2 ==0)
			{
				for(j=b; j<=strlen(m)-1; j++)
				{
					m1[j]=m1[j]-1;
				}	
			}
			else
			{
				for(j=b+1; j<=strlen(m)-1; j++)
				{
					m1[j]=m1[j]-1;
				}
			}
				
			for(l=1;l<=strlen(m)-1;l++)
				{
				printf("%c",m1[l]);	
				}
			printf("\n");
		}
	return 0;
}

