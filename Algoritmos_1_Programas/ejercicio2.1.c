/*Programa 1: calcula la superficie de un triangulo* Moises Reyes* unidad 2*/
#include <stdio.h>
float b,h,a;

int main ()
{	
	printf("Introduzca la base de su triangulo");
	scanf("%f",&b);
	printf("Introduzca la altura de su triangulo");
	scanf("%f",&h);
	a=(b * h)/2;
       	printf("%f",a);
	return 0;
}

