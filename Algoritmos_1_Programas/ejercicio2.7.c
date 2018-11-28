/* Determinar el costo del boleto basado en los kilometros recorridos
Programador: Moises Reyes
10 de octubre del 2018
UNIDAD 2*/

#include <stdio.h>
 float d,c,B;

int main()
{
	printf("Introduzca la distacia que se va a recorrer en km");
	scanf("%f",&d);
	printf("Introduzca el costo por km");
	scanf("%f",&c);
	B=d*c;
	printf("\n\n\t El costo del boleto es: %f",B);
	return 0;
}


