#include<stdio.h>

main()
{
	int i,x=0;
	char vet[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
	scanf("%d",&x);
	for(i=0;i<x;i++)
		{
			if(i!=x-1)
			printf("%c",vet[i]);
			else
			printf("%c\n",vet[i]);
		}
	return 0;
}
