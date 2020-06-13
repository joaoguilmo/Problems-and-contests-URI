#include<stdio.h>
#include<string.h>
#define k 11
main()
{
	int i,x,flag;
	char nome1[k],nome2[k];
	scanf("%d",&x);
	for(i=1;i<=x;i++)
		{
			fgets(nome1, k, stdin);
			fgets(nome2, k, stdin);
			if(!strcmp(nome1,nome2))
			flag = 3;
			
		}
		printf("Caso #%d: De novo!",i);
}
