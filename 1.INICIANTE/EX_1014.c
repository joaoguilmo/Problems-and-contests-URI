#include<stdio.h>

int X=0;
float Y=0, MEDIA;
main()
{
	scanf("%d %f", &X, &Y);
	MEDIA = X/Y;
	printf("%.3f km/l\n",MEDIA);
	return 0;
}
