#include<stdio.h>

int N,i, in, out;;
long int x;

main()
{
	scanf("%d",&N);
	for(i=0;i<N;i++)
		{
			scanf("%ld",&x);
			if((x>=10)&&(x<=20))
			{
				in++;			}
			else
			{
				out++;
			}
		}
	printf("%d in\n",in);
	printf("%d out\n",out);
	return 0;
}
