/*3.14 Determinar con base a la calificacion proporcionada (0-10), indique una letra 10-A,9-B,8-C,
 7 y 6-D, de 5 a 0 F.
Programador: Moises Reyes 
UNIDAD 2
11 de Octubre del 2018*/

#include <stdio.h>

float Ca;

int main()
{
	printf("Ingrese el valor de calificacion");
	scanf("%f",&Ca);
	if(Ca==10){ printf("A");}
	if(Ca==9){ printf("B");}
	if(Ca==8) {printf("C");}
	if(Ca==7) {printf("D");}
	if( Ca==6) {printf("D");}
	if(Ca<=5){ printf("F");}
	return 0;
}

