/* 3.8 Cierta empresa propociona un bono mensual a sus trabajadores en el cual puede ser por antiguedad o por el monto de su sueldo (el que sea mayor), Cuando la antiguedad es mayor a 2 años pero menor a 5 se otorga el 20% de su sueldo. cuando es mayor a 5 o mas,30%.
El bono por sueldo si este es menor a $1000 se da el 25%, cuando este es mayor a 1000 pero menor o igual a 3500 se otorga el 15%. Para mas de $3500 10%.

Programador: Moises Reyes 
10 de octubre del 2018
UNIDAD 2*/

#include <stdio.h>
/* A=antiguedad, S=sueldo, Bs=bono por sueldo,Ba=bono por antiguedad,Bm=bono 
mensual*/
float A,S,Bs,Ba,Bm;

int main()
{	
	printf("Ingrese la cantidad numerica de su sueldo");
	scanf("%f",&S);
	printf("Ingrese los años que ha trbajado para la compañia");
	scanf("%f",&A);
	Ba=0;
	if (A>2 && A<5) Ba=S*.2;
	if (A>=5) Ba=S*.3;
	Bs=0;
	if (S<=1000) Bs=S*.25;
	if (S>1000 && S<=3500) Bs=S*.15;
	if (S>3500) Bs=S*.1;
	if (Ba>Bs) Bm=Ba;
	else 
	{
		Bm=Bs;
	}
	printf("Su Bono mensual es: $ %f \t\n",Bm);
	return 0;
}

