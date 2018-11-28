/*Obtener la hipotenusa de un triangulo rectangulo conociendo los 2 catetos
Programador: Moises Reyes 
UNIDAD 2
10 de octubre del 2018*/

#include <stdio.h>
#include <math.h>

float A,B,C;

int main()
{
	printf("Introduzca el valor del primer lado del triangulo");
	scanf("%f",&A);
	printf("Introduzca el valor del otro lado del triangulo");
	scanf("%f",&B);
	C= sqrt(A*A+B*B);
	printf("\n\n\tSu Hipotenusa es: %f",C);
	return 0;
}

