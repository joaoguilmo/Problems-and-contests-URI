#include<stdio.h>

int i=1, j=60;

main()
{

do
	{
		printf("I=%d J=%d\n",i,j);
		i+=3;
		j-=5;
	} while(j!=0);
		printf("I=%d J=%d\n",i,j);
	return 0;

}
