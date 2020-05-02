#include<stdio.h>

main()
{
	int i,j,a=1,m=0;
	while(	scanf("%lld",&a),a!=0)
		{
			m=0;
		
			long long int v[a][a];
			v[0][0]=1;
			for(i=1;i<a;i++)
				{
					v[i][0]=2*v[i-1][0];
				}		
			for(i=0;i<a;i++)
				{
					for(j=1;j<a;j++)
						{
							v[i][j]=v[i][j-1]*2;
							
				}
			}
			if(m == 0)
			{
            	if (v[a-1][a-1]<10)
                m=1;
                else if (v[a-1][a-1]<=100)
                m=2;
                else if (v[a-1][a-1]<=1000)
                m=3;
                else if (v[a-1][a-1]<=10000)
                m=4;
                else if (v[a-1][a-1]<=100000)
                m=5;
                else if (v[a-1][a-1]<=1000000)
                m=6;
                else if (v[a-1][a-1]<=10000000)
                m=7;
                else if (v[a-1][a-1]<=100000000)
                m=8;
                else 
				m=9;
			
				}			
			for(i=0;i<a;i++)
				{
					for(j=0;j<a;j++)
						{
						if(j==0)
							{
								printf("%*lld",m,v[i][j]);
							}	
						else
							{
								printf(" %*lld",m,v[i][j]);
							}
						}
					printf("\n");
					
				}
			printf("\n");
		}
	return 0;
}
