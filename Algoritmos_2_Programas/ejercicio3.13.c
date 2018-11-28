/* 3.13 Determinar cuanto les costara el pasaje considerando que las tarifas del autobus son si son mas de 100 alumnos el costo es de $20 si son entre 50 y 100, $35. Entre 20 y 49,$40. si son menos de20 alumnos $70.
Programador: Moises Reyes
UNIDAD 2
11 de Octubre del 2018*/

#include <stdio.h>

float Na,Cp;

int main()
{
	printf("Ingrese el numero total de alumnos");
	scanf("%f",&Na);
	Cp=70;
	if(Na>=20) Cp=40;
	if(Na>=40) Cp=35;
	if(Na>=100) Cp=20;
	printf("El costo del pasaje es: %f\n\n",Cp);
	return 0;
}
 
