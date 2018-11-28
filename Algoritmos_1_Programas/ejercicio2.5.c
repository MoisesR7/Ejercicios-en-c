/*Determinar el cobro por trabajos de pintura considerando el cobro por m2
Programador: Moises Reyes
UNIDAD 2
 10 de octubre del 2018*/

#include <stdio.h>

float Mc,Cm,P;


int main()
{
	printf("Introduzca los metros que desea pintar");
	scanf("%f",&Mc);
	printf("Introduzca el costo por metro de la pintura");
	scanf("%f",&Cm);
	P=Mc*Cm;
	printf("\n\n\tSu costo por pintar es: %f pesos",P);
	return 0;
}
 
