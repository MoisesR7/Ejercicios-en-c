/* 2.9 Determinar el costo qe tendra realizar una llamada telefonica con base en el tiempo y el costo por minuto
Programador: Moises Reyes 
UNIDAD 2
10 de Octubre del 2018*/

#include <stdio.h>
float t,Cm,Ct;
int main()
{
	printf("Introduzca el tiempo de duracion de la llamada");
	scanf("%f",&t);
	printf("Introduzca el costo por minuto");
	scanf("%f",&Cm);
	Ct=t*Cm;
	printf("\n\n\tEl costo por la llamada es: %f",Ct);
	return 0;
}

