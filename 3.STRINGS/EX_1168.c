#include<stdio.h>
#include<string.h>
#define k 1000001

int conta(int valor)
{
	int valor1,a;
	valor1 = valor;
	
	switch (valor1)
		{
		case 48:
			{
			a=6;	
			break;
			}
		case 49:
			{
			a=2;	
			break;	
			}
		case 50:
			{
			a=5;
			break;	
			}
			
		case 51:
			{
			a= 5;
			break;	
			}
			
		case 52:
			{
			a= 4;
			break;	
			}
			
		case 53:
			{
			a= 5;
			break;	
			}
			
		case 54:
			{
			a= 6;
			break;	
			}
			
		case 55:
			{
			a= 3;
			break;	
			}
			
		case 56:
			{
			a= 7;
			break;	
			}
			
		case 57:
			{
			a= 6;
			break;	
			}
		default:
			{
			a=0;
			break;	
			}
	}
return a;
}


main()
{
	int d,i,j,qtd=0;
	char valor[k];
	scanf("%d ",&d);
	for(i=0;i<d;i++)
		{
			qtd =0;
			fgets( valor , k, stdin );
			//scanf("%s", valor);
			for(j=0;j<strlen(valor);j++)
				{
					qtd += conta((int)valor[j]);
				}
			
			printf("%d leds\n",qtd);
		}
	return 0;
}

