/* 3.7 La asignacion de becas considerando para alumnos mayores de 18 años promedio mayor o igual a 
9  la beca sera de $2000, con promedio mayor o igual a 7.5 de $1000, para los promedios menores de 
7.5 pero mayores o iguales a 6.o de $500. A los alumnos de 18 años o menores de edad com promedio mayores o iguales a 9 sera $3000,con promedio menores a 9 pero mayores o iguales a 8 de $2000, para los alumnos con promedios menores a 8 pero mayores o iguales a 6 se les enviara una carta de 
invitacion.

Programador: Moises Reyes
UNIDAD 2 
11 de Octubre del 2018*/

#include <stdio.h>

float E1,P1,B;

int main()
{
	printf("Introduzca su edad");
	scanf("%f",&E1);
	printf("Introduzca su promedio");
	scanf("%f",&P1);
	if (E1>18 && P1>=9) B=2000;
	if (E1>18 && P1>=7.5 && P1<9) B=1000;
	if (E1>18 && P1>=6 && P1<7.5) B=500;
	if (E1<=18 && P1>=9) B=3000;
	if (E1<=18 && P1>=8 && P1<9) B=2000;
	if (E1<=18 && P1>=6 && P1<8) B=100;
	if (P1<6) printf("Se le invita a estudiar mas el proximo ciclo escolar");
	printf("Su beca es:$ %f\n",B);
	return 0;
}
 
