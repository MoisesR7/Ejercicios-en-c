/* 5.1 Este programa hace la matriz transpuesta de cualquier matriz de orden M x N 
Programador Moises Reyes
10-11 del 2018*/

#include<stdio.h>



/*int N,M;
float Matriz[N][M];
int i,j;
*/

int main()
{
	int N,M;
	float Matriz[N][M];
	int i,j;

	

	printf("Introduzca el numero de columnas que tendra su matriz");
	scanf("%d",&M);
	printf("Introduzca el numero de filas que tendra su matriz");
	scanf("%d",&N);
	/*if(M>1) M=N;
	else
	{
		printf("Introduzca un numero que sea mayor a 1");
		return -1;
	}*/
	if(M==N & M>1 & N>1){
	for (i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("Digite un numero matriz [%d][%d]: ", i+1,j+1);
			scanf("%f",&Matriz[i][j]);
		}
	}

	printf("\nMatriz Original\n");//Imprime la matriz inicial
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%.2f",Matriz[i][j]);
		}
		printf("\n");
	}

	printf("\nMatriz Transpuesta\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%.2f",Matriz[j][i]);
		}
		printf("\n");
	}	
		
	return 0;
	}

	else 
	{
		printf("Introduzca el mismo numero en las filas y columnas, y que sea mayor a 1");
		return -1;
	}
}
	

