/*#include<stdio.h>

int h_i,h_f,m_i,m_f,hora,minuto=0;

main()
{
	scanf("%d %d %d %d",&h_i ,&m_i,&h_f,&m_f);
	if(m_i == m_f)
	{
		minuto = 60;
	}
	else if( m_i > m_f)
		{
			minuto = 60-m_i+m_f;
		}
		else
			{
				minuto = m_f - m_i;
			}
	if(h_i == h_f)
		{
			if(minuto ==60)
				{
				hora=24;
				minuto =0;	
				}
			
		
		}
	else if(h_i>h_f)
		{
			hora = 24-h_i+h_f;
		}
	else
		{
			if((minuto!=0)&&(m_i>m_f))
			hora = h_f-h_i-1;
			else
			hora = h_f-h_i;
			
		}
		
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
			
	return 0;
}*/

#include <stdio.h>
int main(){
  
  int ih,im,fh,fm,th,tm,x;
  scanf("%d %d %d %d",&ih,&im,&fh,&fm);
  x = (fh*60+fm)-(ih*60+im);
  if(x<0)
    x = x+1440;
  if(x==0)
    x = 1440;
  th = x/60;
  tm = x%60;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
  
  return 0;
}
