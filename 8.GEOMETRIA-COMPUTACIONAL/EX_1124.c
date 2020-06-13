#include<stdio.h>
#include<math.h>

main()
{
	double l,c,r1,r2,flag=1;
	int a,b,R;
	while((flag)!= 0)
		{
			scanf("%lf %lf %lf %lf",&l ,&c ,&r1 ,&r2 );
			if((l==0)&&(c==0)&&(r1==0)&&(r2==0))
			flag=0;
			if(flag !=0)
			{
			if((l>2*r1)&&(l>2*r2)&&(c>((2*r1)+(2*r2))))
				{
					printf("S\n");
				}
			else if ((c>2*r1)&&(c>2*r2)&&(l>((2*r1)+(2*r2))))
					{
						printf("S\n");	
					}
				else 
					{
					int R = r1+r2;
            		int a = l - R;
            		int b = c - R; 
					if(a*a + b*b < R*R)
					{
						printf("N\n");
					}
					else
						{
							printf("S\n");
						}	
					}
			
			}	
		}
	return 0;
}
