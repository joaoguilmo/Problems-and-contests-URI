#include<stdio.h>

main()
{
	int n=1,i,j,k,aux;
	while(n!=0)
		{
			scanf("%d",&n);
			int x[n][n];
			aux = n/2;
			if(n%2 !=0)
				{
					aux++;
				}
			for(k=0;k<aux;k++)
				{
					for(i=k;i<=(n-(k+1));i++)
						{
							for(j=k;j<=(n-(k+1));j++)
								{
									x[i][j]=k+1;
								}
						}
				}
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
