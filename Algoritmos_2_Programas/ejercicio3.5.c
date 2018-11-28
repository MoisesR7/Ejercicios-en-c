
/*3.5 Se tiene el nombre y la edad de tres personas. se desea saber el nombre de la persona de menor
 edad.
Programador: Moises Reyes
UNIDAD 2 
11 de Octubre del 2018*/

#include <stdio.h> 

float e1,e2,e3;
char n1[256],n2[256],n3[256];

int main()
{
	printf("Introduzca el nombre de la primera persona");
	scanf("%s",&n1[0]);
	printf("Introduzca la edad de la primera persona");
	scanf("%f",&e1);
	printf("Introduzca el nombre de la segunda persona");
	scanf("%s",&n2[0]);
	printf("Introduzca la edad de la segunda persona");
	scanf("%f",&e2);
	printf("Introduzca el nombre de la tercera persona");
	scanf("%s",&n3[0]);
	printf("Introduzca la edad de la tercera persona");
	scanf("%f",&e3);
	if (e1<e2 && e1<e3) printf("La persona mas joven es: %s \n", n1[0]);
	if (e2<e1 && e2<e3) printf("La persona mas joven es: %s \n",n2[0]);
	else
	{
		printf("La persona mas joven es: %s \n",n3[0]);
	}
	return 0;
}


