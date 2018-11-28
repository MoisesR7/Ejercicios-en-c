/* 3.11 Se les dara un bono por antiguedad a los empleados de una tienda. si tienen un año, se les dara $100. si tienen 2 años 200 y asi sucesivamente hasta los 5 años. para los que tengan mas de 5,
el bono sera de $100.
Programador Moises Reyes
UNIDAD 2
11 de Octubre del 2018*/

#include <stdio.h>

float A,B;

int main()
{
	printf("Ingrese el valor de su antiguedad en años");
	scanf("%f",&A);
	B=0;
	if(A<=1) B=A*100;
	if(A>=2&& A<3) B=2*100;
	if(A>=3 && A<4) B=3*100;
	if(A>=4 && A<5) B=4*100;
	if (A==5) B=5*100;
	if(A>5)	B=1000;
	printf("Su bono por antiguedad es: %f\n",B);
	return 0;
}

