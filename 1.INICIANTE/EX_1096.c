#include<stdio.h>

int n,i=1,flag=0,flag1=1, j=7;

main()
{

while(n!=853)
	{
	
		printf("I=%d J=%d\n",i,j);
		if(i == 9 && j ==5)
			{
				n=853;
			}
		flag++;
		j = 7-flag;
		if(flag ==3)
			{
				flag =0;
				i +=2;
				j = 7;
			}
	}
	return 0;
}
