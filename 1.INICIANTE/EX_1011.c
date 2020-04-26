#include <stdio.h>

main()
{
	double volume, raio=0;
	scanf("%lf",&raio);
	volume = (4.0/3)*3.14159*raio*raio*raio;
	printf("VOLUME = %.3lf\n",volume);
	return 0;
}
