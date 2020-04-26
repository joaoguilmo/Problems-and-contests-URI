#include<stdio.h>

int x,y;

main()
{
	do
{
	scanf("%d %d",&x,&y);
	if((x!=0)&&(y!=0))
		{
			if((x>0)&&(y>0))
			{
				printf("primeiro\n");
			}
			else if((x>0)&&(y<0))
			{
				printf("quarto\n");
			}
			else if((x<0)&&(y>0))
			{
				printf("segundo\n");
			}
			else
			{
			printf("terceiro\n");
			}	
		}
	
}while((x!=0)&&(y!=0));
return 0;
}
