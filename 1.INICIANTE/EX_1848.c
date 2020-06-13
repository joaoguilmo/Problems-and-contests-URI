#include<stdio.h>
#include<string.h>
#define k 8
main()
{
	int count=0,valor=0;
	char sinal[9];
	while(count<=2)
	{
		//printf("\n %d \n",valor); // teste para ver o funcionamento
		fgets(sinal , k, stdin );
		if(!strcmp(sinal,"caw caw"))
			{
			printf("%d\n",valor);
			count++;
			valor=0;
			}
		else if (!strcmp(sinal,"--*\n"))
			valor=valor+1;	
		else if (!strcmp(sinal,"-*-\n"))
			valor+=2;
		else if (!strcmp(sinal,"-**\n"))
			valor+=3;
		else if (!strcmp(sinal,"*--\n"))
			valor+=4;
		else if (!strcmp(sinal,"*-*\n"))
			valor+=5;
		else if (!strcmp(sinal ,"**-\n"))
			valor+=6;
		else if (!strcmp(sinal ,"***\n"))
			valor+=7;	
	}
}
