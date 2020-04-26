#include<stdio.h>

double A=0, B=0, C=0, AREA=0;

main()
{
	scanf("%lf %lf %lf",&A, &B, &C);
	AREA = A*C/2;
	printf("TRIANGULO: %.3lf\n",AREA);	
	AREA = 3.14159*C*C;
	printf("CIRCULO: %.3lf\n",AREA);
	AREA = ((A+B)/2)*C;
	printf("TRAPEZIO: %.3lf\n",AREA);
	AREA = B*B;
	printf("QUADRADO: %.3lf\n",AREA);
	AREA = A*B;
	printf("RETANGULO: %.3lf\n",AREA);
	return 0;
	
}
