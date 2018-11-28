/* 3.12 Detwerminar el sueldo semanal en base a las horas trabajadas  y el pago por hora y que 
apartir de la hora 41 y hasta la la 45 se paga el doble, de la 46 a la 50 el triple y que trabajar
mas de 50 horas no esta permitido.

Programador: Moises Reyes 
11 de Octubre del 2018
UNIDAD 2*/

#include <stdio.h>

float Ht,Ph,Ss;

int main()
{
	printf("Ingrese el valor de horas trabajadas");
	scanf("%f",&Ht);
	printf("Ingrese el valor de pago por hora");
	scanf("%f",&Ph);
	Ss=Ht*Ph;
	if(Ht>40) Ss= Ss+(Ht-40)*Ph;
	if(Ht>45) Ss=Ss+(Ht-45)*Ph;
	if(Ht>50)
	{ Ss=0;
	 printf("No esta permitido");
	}
	printf("Su sueldo semanal es: $ %f\n\n",Ss);
	return 0;
}
 
