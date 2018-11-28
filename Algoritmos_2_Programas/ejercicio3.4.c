/* 3.4 Determinar cuanto debe cobrar por el uso del estacionamiento, si las primeras 2 horas a $5, las siguientes 3 horas $4, las 5 siguientes en $3, despues de 10 horas el costo por cada una es de 
$2
Programador: Moises Reyes
UNIDAD 2
11 DE OCTUBRE DEL 2018*/

#include <stdio.h> 

float h,Ce;

int main()
{
	printf("Introduzca el tiempo en horas que estuvo en el estacionamiento");
	scanf("%f",&h);
	Ce=0;
	if (h<=2) Ce=h*5;
	if (h>2 && h<=5) Ce=2*5+(h-3)*4;
	if (h>5 && h<=10) Ce=2*5+3*4+(h-5)*3;
	if (h>10) Ce=2*5+3*4+3*5+(h-10)*2;
	printf("Su costo por el estacionamiento es: %f\n\t",Ce);
	return 0;
}
