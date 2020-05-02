#include<stdio.h>

main()
{
	int i,j,n,k=0;
	while(scanf("%d",&n)!=EOF)
		{
			
			int x[n][n];
			k=n-1;
			// controi a matriz identidade
			for(i=0;i<n;i++)
				{

					for(j=0;j<n;j++)
						{
							if(j==i)
							x[i][j]=1;
							else
							x[i][j]=3;
						}
					x[i][k]=2; 				// controi a matriz identidade inversa com valor 2
					k--;
				}

			// exibe a matriz
			for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						{
							printf("%d",x[i][j]);
						}
					printf("\n");
				}
		}
}
