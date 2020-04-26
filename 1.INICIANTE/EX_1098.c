/*

#include<stdio.h>

double i,j,a=0,b=0,x,c;

main()
{
	for(i=0;i<=2;i+=.2)
	{
		for(j=1;j<=3;j++)
			{
				
				a++;
				x = b+a+c;
				if((i==0)||(i==1)||((i>=1.9)&&(i<=2.1)))
					{
						printf("I=%.0lf J=%.0lf\n",i,x);
					}
				else
				{
				printf("I=%.1lf J=%.1lf\n",i,x);	
				}
			}
		a=0;
		c +=.201;	
		if(c>1.1)
			{
				c==0;
			}
	}
}

*/

#include<stdio.h>

int main(){
  
  float i,j=1;
  for(i=0;i<=2.1;i+=0.2){
    if(i==0 || i==1 || (i>=1.9 && i<=2.1)){
          printf("I=%.0f J=%.0f\n",i,j);
      printf("I=%.0f J=%.0f\n",i,j+1);
      printf("I=%.0f J=%.0f\n",i,j+2);
    }
        else{
          printf("I=%.1f J=%.1f\n",i,j);
      printf("I=%.1f J=%.1f\n",i,j+1);
      printf("I=%.1f J=%.1f\n",i,j+2);  
    }
    j+=.2;
  }
  
  return 0;
}
