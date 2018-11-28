/* 3.15 Con base en un numero proporcionado(1-7) indique el dia de la semana que le corresponde 
(L-D).
Programador: Moises Reyes 
UNIDAD 2
11 de Octubre del 2018*/

#include <stdio.h>

float Ds;

int main()
{
	printf("Ingrese el valor del dia de la semana");
	scanf("%f",&Ds);
	if(Ds==1) printf("Lunes");
	if(Ds==2) printf("Martes");
	if(Ds==3) printf("Miercoles");
	if(Ds==4) printf("Jueves");
	if(Ds==5) printf("Viernes");
	if(Ds==6) printf("Sabado");
	if(Ds==7) printf("Domingo");
	if(Ds<1 && Ds>7) printf("Dia no valido");
	return 0;
}

