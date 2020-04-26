#include <stdio.h>
#include <math.h>

float x1, x2, y11, y2, DISTANCIA;

int main()
{
	scanf("%f %f", &x1, &y11);
	scanf("%f %f", &x2, &y2);
	DISTANCIA = sqrt(pow((x2-x1),2)+pow((y2-y11),2));
	printf("%.4f\n",DISTANCIA);
	return 0;
}
