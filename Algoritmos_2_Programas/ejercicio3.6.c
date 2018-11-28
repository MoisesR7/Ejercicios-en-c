/* 3.6 determinar el costo y el descuento que tendra un articulo. cosiderando que si su precio es mayor o igual a $200 se le aplica un descuento de 15% y si su precio es mayor a 100 y menor a 200 el descuento es de 12% y si es menor a $100 solo sera 10%.
Programador: Moises Reyes
UNIDAD 2
11 de Octubre del 2018*/

#include <stdio.h>

float Ci,Cf,D;

int main()
{
	printf("Introducir el precio del producto");
	scanf("%f",&Ci);
	if (Ci>=200)
	{
		D=Ci*.15;
		Cf=Ci-D;
	}
	if (Ci>100 && Ci<200)
	{
		D=Ci*.12;
		Cf=Ci-D;
	}
	if(Ci<100) 
	{
		D=Ci*.10;
		Cf=Ci-D;
	}
	printf("Su precio del productoya con el descuento es: %f\n", Cf);
	return 0;

}

