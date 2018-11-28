/*4.4 
Programador: Moises Reyes
UNIDAD 2 Y 3
11 de Octubre 2018*/

#include <stdio.h>


int v,b,r,c,flag;

int main(){
	v = 0;
	b = 0;
	r = 0;
	
	do{
		printf("Verdes = 1\nBlancos = 2\nRojos = 3");
		scanf("%d", &c);
		switch(c){
			case 1:
				v++;
				break;
			case 2:
				b++;
				break;
			case 3:
				r++;
				break;
			default:
				printf("Opcion no valida");
				break;
		}
		printf("Seguir? 1=Si\t2=No");
		scanf("%d", &flag);
	}while(flag == 1);

	printf("Verdes: %d\n", v);
	printf("Rojos: %d\n", r);
	printf("Blancos: %d\n",b);
	
}
