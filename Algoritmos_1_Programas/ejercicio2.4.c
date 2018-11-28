/* Determinar el cobro del estacionamiento con base a en las horas que disponen y que las fracciones se toman como completas
Programador: Moises Reyes UNIDAD 2
 10 de octubre del 2018 */
#include <stdio.h>

float Ch,h,m,Hc,Ce;

int main()
{
	printf("Introduzca su tiempo que estuvo en el estacionamiento en horas");
	scanf("%f",&h);
	printf("Introduzca el costo por hora");
	scanf("%f",&Ch);
	m=h*60;
	Hc=0;
	do{
		m=m-60;
		Hc=Hc+1;
	}while(m>0);
	Ce=Ch*Hc;
	printf("Su costo por el uso del estacionamiento es: %f pesos",Ce);
	return 0;
}

