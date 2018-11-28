/* Determinar el tiempo que tarda una persona en llegar de una ciudad a otra, que lleva una 
velocidad constante
Programador: Moises Reyes
UNIDAD 2 
10 de Octubre del 2018*/

#include <stdio.h>

float d,v,t;

int main ()
{
	printf("Introduzca el valor de la distancia que se va a recorrer");
	scanf("%f",&d);
	printf("Introduzca la velocidad a la que va el ciclista");
	scanf("%f",&v);
	t= (d)/(v);
	printf("\n\n\tEl tiempo tardado sera: %f",t);
	return 0;
}

