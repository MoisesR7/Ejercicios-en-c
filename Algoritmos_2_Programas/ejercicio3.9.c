/* 3.9 Una compaña de autos ofrece dos tipos de poliza: combertura amplia A  y daño a terceros B
Para el plan A la cueta base es de $1200, y para el B, de $950. A ambos planes se les carga un 10%
del costo si la persona que conduce tiene por habito beber, 5% si utliza lentes, 5% si padece alguna enfermedad cardiaca,si tiene mas de 40 años se le carga 20% de lo contrario solo 10% todo en base 
al cosro base.
Programador: Moises Reyes 
UNIDAD 2 
11 de Octubre del 2018*/

#include <stdio.h>
#include <stdlib.h>

/*Padece enfermedad= Pe,tipo de poliza; Tp, Toma alcohol= Ta, utiliza lentes=Ul.
Cargos= c, Costo de la poliza=Cp, cuota= Cu, edad= e 
*/

int main(void)
{
	
	int Pe,Tp,Ta,Ul;
	float c,Cp,Cu,e;
	printf("Ingrese el valor de la edad:");
	scanf("%f",&e);
	printf("Seleccione el valor de tipo poliza");
	printf("\t1.- A cobertura amplia");
	printf("\t2.- B daños a terceros");
	printf("\t: ");
	do 
	{
		scanf("%d",&Tp);
		if(Tp<1||Tp>2) printf("Valor Incorrecto");
	}while(Tp<1||Tp>2);
	printf("Seleccione el valor si toma alcohol\n");
	printf("1.-si\n");
	printf("2.-no\n");
	printf(" : ");
	do
	{	scanf("%d",&Ta);
		if(Ta<1||Ta>2) printf("Valor incorrecto.Ingreselo de nuevo");
	}while (Ta<1||Ta>2);
	printf(" Seleccione el valor de utilza lentes");
	printf("1.-si\n");
	printf("2.-no\n");
	printf(" : ");
	do
	{
		scanf("%d",&Ul);
		if(Ul<1||Ul>2) printf("Valor incorrecto. Ingreselo de nuevo");
	}while (Ul<1||Ul>2);
	printf("Seleccione el valor de paceder una enfermedad");
	printf("1.-si\n");
	printf("2.-no\n");
	printf(" : ");
	do
	{ 
		scanf("%d",&Pe);
		if(Pe<1||Pe>2) printf("Valor Incorrecto.Ingreselo de nuevo");
	}while(Pe<1||Pe>2);
	Cu=Tp==1?1200:950;
	c=0;
	if(Ta==1) c=c+Cu*.1;
	if(Ul==1) c=c+Cu*.05;
	if(Pe==1) c=c+Cu*.05;
	if(e>40) c=c+Cu*.2;
	else
		c=c+Cu*.1;
	
	Cp=Cu+c;
	printf("Valor de cargos: %g\n",c);
	printf("Valor del costo de la poliza: %g\n",Cp);
	printf("Valor de cuota: %g\n",Cu);
	putchar('\n');
	return 0;
}


























