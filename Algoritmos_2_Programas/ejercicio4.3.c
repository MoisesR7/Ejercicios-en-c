/*4.3 Determinar, de N cantidades, cuantas son cero, cuantas son menores a cero, y cuantas son mayores a cero.
Programador Moises Reyes
UNIDAD 2 Y 3
11 de Octubre del 2018*/

#include <stdio.h>
#include <stdlib.h>
int n,c,Mc,mc;

int main(void)
{
	c=0;
	Mc=0;
	mc=0;
	do
	{	printf("Introduzca la cantidad");
		scanf("%d",&n);
		if(n==0) c=c+1;

		else 
		{
			if(n>0) Mc=Mc+1;
			else
			{
				if(n<0) mc=mc+1;
			}
		}

	
	printf("¿Continuo?");
	printf("1.-Si\n");
	printf("2.-No\n");
	 
		scanf("%d",&n);
		
	}while(n==1);
	printf("\nCeros:%d\n",c);
	printf("Mayores que cero: %d\n",Mc);
	printf("Menores que cero: %d\n",mc);
	return 0;
} 


		



	
	
