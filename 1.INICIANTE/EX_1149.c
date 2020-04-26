#include<stdio.h>

int a,b,i,valor,flag =0;

main()
{
	scanf("%d %d",&a,&b);
	do
	{
		
		if(a>0 && b>0)
			{
				for(i=0;i<b;i++)
					{
						valor = valor +(a+i);
					}
				flag=1;	
			}
		else if(a<=0)
			{
				scanf("%d",&a);
			}
		else
			{
				scanf("%d",&b);
			}
	}while(flag==0);
	printf("%d\n",valor);
	return 0;
}
