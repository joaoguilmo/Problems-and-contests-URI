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
     long double num;  // utilizando long double não funciona no dev c
     char numero[120];

     scanf("%LE", &num);
// sprintf não é seguro pois pode haver estouro do buffer 
     sprintf(numero,"%LE", num);	// numero = ponteiro do buffer %LE = formato e num = valor
/*
Compõe uma sequência com o mesmo texto que seria impresso se o formato fosse usado em printf, mas, em vez de ser impresso, o conteúdo é armazenado como uma sequência C no buffer apontado por str.
*/
     if(numero[0] != '-') printf("+");

     printf("%.4LE\n", num);
   
     return 0;
}
