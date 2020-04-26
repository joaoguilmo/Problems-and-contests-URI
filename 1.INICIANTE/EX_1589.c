#include<stdio.h>

main()
{
	unsigned int N,R1,R2,result,i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		{
			scanf("%d %d",&R1,&R2);
			result = ((R1*2)+(R2*2))/2;
			printf("%d\n",result);
		}
}
