#include <stdio.h>
#include<stdlib.h>
/*Comentario
Programa que llena una matriz con numeros aleatorios y copia el contenido a 
otra matriz y la muestra en pantalla.
Fecha:5-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int f;
	int c;
	int im[100][100];
	int i,j;
	int m2[100][100];
	
	printf("Ingrese Cantidad de Filas:\n");
	scanf("%d",&f);
	printf("Ingrese Cantidad de Columnas:\n");
	scanf("%d",&c);
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{		
			im[i][j]=rand()%100;
		}		
	}
	printf("\n");
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{	
			m2[i][j]=im[i][j];
			printf(" %d ",m2[i][j]);
		}
		printf("\n");
	}
	return 0;
}

