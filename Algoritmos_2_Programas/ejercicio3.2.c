/* 3.2 Determinar el sueldo semanal con base a las horas trabajadas y el pago por horar,
 considerando que despues de 40 horas se pagan doble
Programador: Moises Reyes 
UNIDAD 2
10 de Octubre del 2018*/

#include <stdio.h>

float Ph,Ht,S,R;

int main()
{
	printf("Introduzca el numero de horas que trabajo");
	scanf("%f",&Ht);
	printf("Introduzca el sueldo por hora trabajada");
	scanf("%f",&Ph);
	if(Ht<=40)
		S=Ph*Ht;
	else {
		R=Ht-40;
		S=R*2*Ph+40*Ph;
	}	
	printf("Su salario es: %f",S);
	return 0;
}
	
