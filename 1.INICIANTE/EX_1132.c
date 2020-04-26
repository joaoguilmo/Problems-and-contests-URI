#include<stdio.h>

int i,x,y,total=0,aux;

main()
{
	scanf("%d %d",&x ,&y);
	if(x>y)
		{
			aux = y;
			y = x;
			x = aux;
		}
	for(i=x;i<=y;i++)
		{
			if((i%13) !=0)
				{
					total = total+i;
				}
		}
	printf("%d\n",total);
	return 0;
}
