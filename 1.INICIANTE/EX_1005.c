#include<conio.h>
#include<stdio.h>

double A=0, B=0, MEDIA=0;

int main()
{
	scanf("%lf", &A);
	scanf("%lf", &B);
	MEDIA = (A*0.35+B*0.75)*0.9090909;
	printf("MEDIA = %.5lf\n",MEDIA);
	return 0;
}
