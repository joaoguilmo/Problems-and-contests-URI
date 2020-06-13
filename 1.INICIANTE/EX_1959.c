#include<stdio.h>

main()
{
	unsigned int n,l;
	while(scanf("%u %u",&n,&l)!=EOF)	// %u para a variavel unsigned int
		{
			printf("%u\n",n*l);
		}
	return 0;
}
