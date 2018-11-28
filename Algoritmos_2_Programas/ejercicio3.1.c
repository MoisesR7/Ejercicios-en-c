/* 3.1 Determinar si una persona puede votar o no con base en su edad en las proximas elecciones
Programador: Moises Reyes 
UNIDAD 2
10 de Octubre del 2018*/

#include <stdio.h>

float e;

int main()
{
	printf("Introduzca su edad");
	scanf("%f",&e);
	if (e>=18)
	printf("Si puedes Votar");
	else 
	{
		printf("No puede votar");
	}
	return 0;
}	
