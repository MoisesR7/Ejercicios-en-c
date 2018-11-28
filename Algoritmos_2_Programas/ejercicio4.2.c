/* 4.2 Ofrece hamburguesas Sencillas, dobles y triples las cuales tienen un costo de $20,25,28.
la empresa acepta tarjetas de credito con un cargo de 5% sobre la compra:Suponiendo que los 
clientes adquieren N hamburguesas, las cuales pueden ser de diferente tipo.
Programador Moises Reyes 
11 de Octubre del 2018
UNIDAD 2 Y 3*/

#include <stdio.h>
#include <stdlib.h> 


int Fp;
float c, d, s, t, p, St;

int main(void)
{
	printf("Ingrese el de hamburguesas dobles");
	scanf("%f",&d);
	printf("Ingrese el valor de hamburguesas sencillas");
	scanf("%f",&s);
	printf("Ingrese el valor de hamburguesas triples");
	scanf("%f",&t);
	St=s*20+d*25+t*28;
	printf("Seleccione su forma de pago");
	printf("1.-Efectivo\n");
	printf("2.-Tarjeta de credito\n");
	printf("\t:");
	do
	{
		scanf("%d",&Fp);
		if(Fp<1||Fp>2) printf("Valor Incorrecto. Ingreselo de nuevo");
	}while(Fp<1||Fp>2);
	c=Fp==1?0:St*.05;
	p=St+c;
	printf("Valor de cargo: %g\n",c);
	printf("Valor de pago: %g\n",p);
	printf("Valor de subtotal: %g\n",St);
	return 0;
}



	
