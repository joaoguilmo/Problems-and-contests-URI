#include<stdio.h>
#include<string.h>
#define m 99

main()
{
	int i,x,j,open4=0;
	char v[m];
	scanf("%d ", &x);
	for(i=0;i<x;i++)
		{
			
			fgets(v,m,stdin);
			for(j=0;j<strlen(v);j++)
				{
					if((v[j]=='T'))
					{
						if((v[j+1]=='h'))
							{
								if((v[j+2]=='o'))
								{
									if((v[j+3]=='r'))
										{
										open4 =1;
										//j = strlen(v)-1;	
										}
								}
							}
					}
			
				}
			if(open4==1)
				{
					printf("Y\n");
				}
			else
				{
					printf("N\n");			
				}
		
			open4=0;
		}
	return 0;
}
