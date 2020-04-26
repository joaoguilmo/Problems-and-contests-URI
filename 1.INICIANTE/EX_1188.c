#include <stdio.h>

int main()
{
  int c,l,k=-4,z=2,p=7;
  char t[2];
  double m[12][12],soma=0,media=0;
  scanf("%c",&t);
  soma =0;
  media =0;
  for(l=0;l<12;l++)			// inicia a leitura da matriz
    for(c=0;c<12;c++)
      scanf("%lf",&m[l][c]);

  for(l=7;l<12;l++)
  	{
  	
	  for(c=p-z;c<11+k;c++) 
    	{
    	soma+=m[l][c];	
		}
    	z++;
    	k++;
	  }
        

  media = soma/30.0; //Dividio por 30 ,pois é o numero de elementos nessa regiao
  if(t[0]=='M')
    printf("%.1lf\n",media);
  else if(t[0]=='S')
    printf("%.1lf\n",soma);

  return 0;
  
}
