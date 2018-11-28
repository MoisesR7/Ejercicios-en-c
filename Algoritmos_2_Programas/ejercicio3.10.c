/*3.10 Determinar a que lugar se podra ir de vacaciones considerando que se cobra por km recorrido
considerando el costo del pasaje tanto de ida, como de vuelta. los datos fijos: Mexico 750km, PuertoVallarta 800km, Acapulco 1200km y Cancun 1800km. tambien debe considerarse la posibilidad de quedarse en casa
Programador: Moises Reyes
UNIDAD 2
11 de Octubre del 2018*/

#include <stdio.h>
/*Costo por kilometro=Ck, Presupuesto=P*/

float Ck,P;

int main()
{
	printf("Introduzca su presupuesto para viajar");
	scanf("%f",&P);
	printf("Introduzca la tarifa por km de la tortuga");
	scanf("%f",&Ck);
	if (Ck*750*2<=P) printf("Mexico");
	else
	{
		printf("Quedarse en casa");
	}
	if (Ck*800*2<=P) printf("Acapulco");
	if (Ck*1200*2<=P) printf("Puerto Vallarta");
	if (Ck*1800*2<=P) printf("Cancun");
	return 0;
}

