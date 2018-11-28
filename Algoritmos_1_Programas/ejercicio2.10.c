/*2.10  Determinar el pago de una persona por el total de metros cubicos que consume de agua
Programador: Moises Reyes
UNIDAD 2
10 de Octubre del 2018*/

#include <stdio.h>

float Cp,Cm3,P;

int main()
{ 
	printf("Introduzca el consumo de metros cubicos de la persona");
	scanf("%f",&Cp);
	printf("Introduzca el costo por metro cubico");
	scanf("%f",&Cm3);
	P=Cp*Cm3;
	printf("Su total de adeudo es de: %f",P);
	return 0;
}

