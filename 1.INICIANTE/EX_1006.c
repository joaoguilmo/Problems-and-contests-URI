#include<conio.h>
#include<stdio.h>

double A=0, B=0, C=0, MEDIA=0;

int main()
{
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	MEDIA = (A*0.2+B*0.3+C*0.5);
	printf("MEDIA = %.1lf\n",MEDIA);
	return 0;
}
