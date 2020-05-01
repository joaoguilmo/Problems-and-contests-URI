#include<stdio.h>

main()
{
	int n=1,i,j,k,aux;
	while(n!=0)
		{
			scanf("%d",&n);
			int x[n][n];
			// cria a matriz identidade
			for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						{
							if(j==i)
							x[i][j]=1;
							else
							x[i][j]=0;
						}
				}
			// constroi a matriz apartir da direita da matriz identidade
			for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						{
							if(j>i)
							x[i][j]=x[i][j-1]+1;
						}
				}
			// j é coluna e i é linha 	
			for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						{
							if(i>j)
							x[i][j]=x[i-1][j]+1;
						}
				}
		/*	for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
						{
							if(j>i)
							x[i][j]++;
							else
							x[i][j]=0;
						}
				}*/
			// apresentação da matriz
			for(j=0;j<n;j++)
				{
					for(i=0;i<n;i++)
						{
							if(i==(n-1))
								{
									printf("%3d\n",x[j][i]);
								}
							else
								{
									printf("%3d ",x[j][i]);
								}
						}
				}
			if(n!=0)
				{
					printf("\n");
				}
		}
	return 0;
	
}
