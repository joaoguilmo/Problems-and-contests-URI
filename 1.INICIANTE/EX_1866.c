#include<stdio.h>

int recursividade(int n)
{	
	int a=n;
	if(a%2 ==0)
		return 1;
	else
		return -1;			
}

main()
{
	int n,i,valor=0,x,j=0;
	scanf("%d",&x);
	while(x!=j)
	{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		valor = valor+recursividade(i);
	printf("%d\n",valor);
	valor=0;
	j++;
	}
}
