#include <stdio.h>

int anos, meses, dias;
main()
{
	scanf("%d",&dias);
	anos = dias/365;
	printf("%d ano(s)\n",anos);
	meses = (dias - anos*365)/30;
	printf("%d mes(es)\n",meses);
	dias = (dias - anos*365 - meses*30);
	printf("%d dia(s)\n",dias);
	return 0;
}
