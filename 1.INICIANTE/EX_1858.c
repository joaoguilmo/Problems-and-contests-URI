#include<stdio.h>

main()
{
	int n,t,menor=9999,a[100],i,posicao;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<menor)
				{
					menor = a[i];
					posicao = i;		// salva a posição do menor valor
				}
		}
	printf("%d\n",posicao+1);				// exibe
	return 0;
}
