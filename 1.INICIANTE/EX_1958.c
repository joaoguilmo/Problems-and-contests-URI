/*#include<stdio.h>

main()
{
	 double a=0;

			scanf(" %lf",&a);
	
			if(a >= 0){
			printf("+%.4lE\n", a);	
			}
			else{
			printf("%.4lE\n", a);
				
			} 
			
	
	return 0;
}*/
  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     long double num;  // utilizando long double n�o funciona no dev c
     char numero[120];

     scanf("%LE", &num);
// sprintf n�o � seguro pois pode haver estouro do buffer 
     sprintf(numero,"%LE", num);	// numero = ponteiro do buffer %LE = formato e num = valor
/*
Comp�e uma sequ�ncia com o mesmo texto que seria impresso se o formato fosse usado em printf, mas, em vez de ser impresso, o conte�do � armazenado como uma sequ�ncia C no buffer apontado por str.
*/
     if(numero[0] != '-') printf("+");

     printf("%.4LE\n", num);
   
     return 0;
}
