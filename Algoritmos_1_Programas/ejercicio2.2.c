/*Convertir los pesos mexicanos de una empresa en dolares
Programador:Moises Reyes UNIDAD 2*/
#include <stdio.h>
float Pm,D;

int main ()
{
	printf("\n\tIngrese su cantidad de dinero en peso mexicanos");
	scanf("%f",&Pm);
	D=Pm/18.87;
	printf("\n\t%fSu dinero en dolares es",D);
	if (D>0);
	return 0;
}


