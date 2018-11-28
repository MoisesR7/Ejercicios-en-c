/* 3.3 Determinar que regalo es el ideal para darle a su ser querido deacuerdo a su presupuesto de
 dinero
Programador: Moises Reyes
UNIDAD 2
11 de Octubre del 2018*/

#include <stdio.h>

float D;

int main()
{
	printf("Introduzca la cantidad de dinero que dispone");
	scanf("%f",&D);
	if (D<=10) printf("\n\n\tSu regalo es: TARJETA");
	if (D>11 && D<=100) printf("\n\n\tSu regalo es: CHOCOLATES");
	if (D>=101 && D<=250) printf("\n\n\tSu regalo es: FLORES");
	if (D>=251) printf("\n\n\tSu regalo es: ANILLO");
	return 0;
}

