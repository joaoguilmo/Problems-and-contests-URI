#include<stdio.h>

/*int n=1,i=1,x=8,flag=0, j=8;

main()
{

while(n!=0)
	{

		flag++;
		j=x-flag;
		printf("I=%d J=%d \n",i,j);
		if(i==9 and j ==13)
			{
				n=0;
			}
		if(flag ==3)
			{
				flag =0;
				i+=2;
				x = j+5;
			}
			
	}
	return 0;
}*/

int i,j,a=0,b=8,x;
main()
{
	for(i=1;i<=9;i+=2)
	{
		for(j=1;j<=3;j++)
			{
				
				a++;
				x = b-a;
				printf("I=%d J=%d\n",i,x);
				

			}
		a=0;
		b = x+5;	
	}
}
