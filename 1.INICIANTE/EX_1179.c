#include<stdio.h>

main()
{
	int a[5],b[5],c[5],i,count=0,valor,j=0,k=0,l=0;
	for(i=0;i<15;i++)
		{
			scanf("%d",&valor);
			if(count>=9)
				{
					if(valor%2 ==0)
						{	
							a[j]=valor;
							printf("par[%d] = %d\n",j,a[j]);
							j++;
						}
					else 
						{
						b[k]=valor;
						printf("impar[%d] = %d\n",k,a[k]);
						k++;
						}	
				}
			if((valor%2 ==0)&&(j<5))
				{
					a[j]=valor;
					
					j++;
				}
			else if(k<5)
				{
					b[k]=valor;
					
					k++;	
				}
			if(count == 9)
				{
					j=0;
					k=0;
					for(l=0;l<5;l++)
						{
						printf("par[%d] = %d\n",l,a[l]);	
						}
					for(l=0;l<5;l++)
						{
						printf("impar[%d] = %d\n",k,b[i]);	
						}	
				}
			
			count++;	
		}
}
