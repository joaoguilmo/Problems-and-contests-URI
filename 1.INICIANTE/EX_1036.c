#include<stdio.h>
#include<math.h>

double A, B, C, x1,x2;

main()
{
	scanf("%lf %lf %lf",&A ,&B ,&C);
	if((A==0)||((pow(B,2)-4*A*C)<0))
	{
		printf("Impossivel calcular\n");
	}
	else
	{
		x1 = (-B+sqrt((pow(B,2)-4*A*C)))/(2*A);
		x2 = (-B-sqrt((pow(B,2)-4*A*C)))/(2*A);
		printf("R1 = %.5lf\n",x1);
		printf("R2 = %.5lf\n",x2);
	}
	return 0;
}
