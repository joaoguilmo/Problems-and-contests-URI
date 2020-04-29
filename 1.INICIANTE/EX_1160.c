#include<stdio.h>


main()
{
	int i,flag;
	int x, a,b,count;
	long int na ,nb;
	double pa, pb;
	scanf("%d",&x);
	for(i=0 ; i<x ; i++)
		{
			count = 0;
			scanf("%ld %ld %lf %lf",&a ,&b ,&pa ,&pb);
			na = a; nb = b;
			while((na<=nb)&&(count<=100))
				{
					na +=(na*pa/100);
					nb +=(nb*pb/100);
					count++;	
				}
			if(count<=100)	
			printf("%ld anos.\n",count);	
			else
			printf("Mais de 1 seculo.\n");
		}
}
