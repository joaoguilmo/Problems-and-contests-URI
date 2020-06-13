#include<stdio.h>

main()
{
	int a,b,c,d,i,flag1=0,aux;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!= EOF)
		{
			for(i=0;i<=3;i++)
				{
					if(i==1)
						{
							aux =a;
							a=d;	
						}
						
					else if(i==2)
							{
								a = aux;
								aux = b;	
								b=d;
							}
							
						else if(i==3)
							{
								b = aux;
								aux = c;
								c=d;
							}
								
					if(a<(b+c))
					{
						if(b<(a+c))
							{
								if(c<(a+b))
									{
									flag1=1;
									i=4;
									}
								else
								flag1=0;
							}
						else
						flag1 =0;
					}
					else
					flag1=0;
						
				}
			
			if(flag1 ==1 )
				printf("S\n");
			else
				printf("N\n");
			flag1=0;
		}
	return 0;
}
