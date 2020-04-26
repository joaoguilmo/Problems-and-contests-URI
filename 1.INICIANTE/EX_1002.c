#include<conio.h>
#include<stdio.h>

double n=3.14159, raio=0, A=0;

int main()
{
	scanf("%lf", &raio);
	A = n*raio*raio;
	printf("A=%.4lf \n ",A);
	return 0;
}
