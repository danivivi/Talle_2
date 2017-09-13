#include <stdio.h>
/*Comentario
Programa que llena una matriz pidiendo al usuario que ingrese el numero de filas
y columnas y la imprime en pantalla.
Fecha:5-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int f;
	int c;
	int im [100][100];

	
	printf("Ingrese Cantidad de Filas:\n");
	scanf("%d",&f);
	printf("Ingrese Cantidad de Columnas:\n");
	scanf("%d",&c);
	
	printf("Ingrese Elementos de la Matriz\n");
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{			
			scanf("%d",&im[i][j]);
		}	
	}	
	printf("\n");	
	printf("Mostrando Matriz\n");		
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d",im[i][j]);		 
		}	
		printf("\n");	
	}
	return 0;
}

