#include <stdio.h>

int main()
{
  int c,l,count=1,k=0;
  char t[2];
  double m[12][12],soma=0,media=0;
  scanf("%c",&t);
  soma =0;
  media =0;
  for(l=0;l<12;l++)			// inicia a leitura da matriz
    for(c=0;c<12;c++)
      scanf("%lf",&m[l][c]);

  for(l=1;l<11;l++)					
  	{								
  	if(l<5)							
  	{								
  		for(c=11-k;c<12;c++) 			
    		{						
    			soma+=m[l][c];		
			}	
			k++;
	  }
	else if (l==6 || l ==5)			
		{
			for(c=7;c<12;c++)									
				{												
					soma+=m[l][c];								
				}												
		}														
	else if(l>6)												
		{														
			for(c=7+count;c<12;c++) 		
    		{							
    			soma+=m[l][c];			
										
    			
			}	
			count++;	
		}
	  
	  }
        

  media = soma/30.0; //Dividio por 30 ,pois é o numero de elementos nessa regiao
  if(t[0]=='M')
    printf("%.1lf\n",media);
  else if(t[0]=='S')
    printf("%.1lf\n",soma);

  //return 0;
  
}
