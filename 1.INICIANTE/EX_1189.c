#include <stdio.h>

int main()
{
  int c,l,count=1,k=4;
  char t[2];
  double m[12][12],soma=0,media=0;
  scanf("%c",&t);
  soma =0;
  media =0;
  for(l=0;l<12;l++)			// inicia a leitura da matriz
    for(c=0;c<12;c++)
      scanf("%lf",&m[l][c]);

  for(l=1;l<11;l++)					// 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10
  	{								//		1º		,	2º	 ,		3º		
  	if(l<5)							//	c | K |
  	{								//	0	4	= 1
  		for(c=0;c<5-k;c++) 			//	1	3	= 2
    		{						//	2	2	= 3
    			soma+=m[l][c];		//	3	1	= 4
			}	
			k--;
	  }
	else if (l==6 || l ==5)			//
		{
			for(c=0;c<5;c++)									//1
				{												//11
					soma+=m[l][c];								//111	
				}												//1111
		}														//11111
	else if(l>6)												//11111
		{														//1111
			for(c=0;c<5-count;c++) 		//	c | count |			//111
    		{							//	0	0				//11
    			soma+=m[l][c];									//1
										//	0	1	= 4
    			
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
