#include <stdio.h>
/*Comentario
Programa que lee una matriz de 3x3 y muestra su traspuesta.
Fecha:5-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int im [3][3];
	int l;
	
	l=3;
	for(int f=0;f<l;f++)
	{
		for(int c=0;c<l;c++)
		{
			printf("Ingrese Elementos de la Matriz\n");
			scanf("%d",&im[f][c]);
		}	
	}	
	printf("\n");	
	printf("Mostrando Matriz\n");		
	for(int f=0;f<l;f++)
	{
		for(int c=0;c<l;c++)
		{
			printf("%d",im[f][c]);		 
		}	
		printf("\n");	
	}
	printf("\n");	
	printf("Mostrando Matriz Traspuesta\n");		
	for(int f=0;f<l;f++)
	{
		for(int c=0;c<l;c++)
		{
			printf("%d",im[c][f]);		 
		}	
		printf("\n");	
	}
	return 0;
}
