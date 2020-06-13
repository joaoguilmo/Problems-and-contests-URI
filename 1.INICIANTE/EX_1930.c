#include<stdio.h>

main()
{
	int a,b,c,d;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
		{
			a = a+b+c+d-3;
			printf("%d\n",a);
		}
}
