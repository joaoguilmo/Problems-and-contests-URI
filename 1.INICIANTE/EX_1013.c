#include <stdio.h>
#include <stdlib.h>

int A=0, B=0, C=0, MaiorAB;

main()
{
	scanf("%d %d %d", &A, &B, &C);
	MaiorAB = (A+B+abs(A-B))/2;
	MaiorAB = (MaiorAB +C + abs(MaiorAB - C))/2;
	printf("%d eh o maior\n",MaiorAB);
	return 0;
}

