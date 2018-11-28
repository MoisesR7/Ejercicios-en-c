/*4.1 Un profesor tiene un salario inicial de $1500 y recibe un incremento de 10% anual durante 6 años. cual es su salario al cabo de 6 años y que salario ha recibido en cada uno de los 6 años.
Progrmador: Moises Reyes
11 de Octubre del 2018
UNIDAD 2*/

#include <stdio.h>
int main()
{

	const float In=.10;
	float Si,Aum;
	int C;

	C=1;
	Si=1500;
	while(C<=6)
	{
		Aum= (Si*In);
		Si= (Si+Aum);
	printf( "%s %s %f %s","Este es tu salario anual:\n\n","$",Si);
	C=C+1;
	}
	printf("%s %s %f %s","\n\nEste es tu salario total de los 6 años que trabajaste",Si);
	return 0;
}

