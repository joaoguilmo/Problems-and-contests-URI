#include<stdio.h>
#include<math.h>

main()
{
	int r1,x1,y1,r2,x2,y2;
	float d;
	while((scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2)) != EOF)
		{
			d = sqrt(pow(x1-x2,2)+pow(y1-y2,2)); 
			if(r1>=d+r2)
				{
					printf("RICO\n");
				}
			else
				{
					printf("MORTO\n");
				}
		}
	return 0;
}
/*
int main(){
    int r1,x1,y1,r2,x2,y2;
    float distancia;
    
    while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF){
                    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
                    if(r1 >= distancia+r2) printf("RICO\n");
                    else printf("MORTO\n");
    }
    return 0;
}*/
