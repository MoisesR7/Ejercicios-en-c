/**/

#include <stdio.h>

long double ahorro;

int main(){
	ahorro = 3;
	for(int i = 0; i < 365; i++){
		ahorro *= 3;
	}
	printf("%Lf", ahorro);
	
}
