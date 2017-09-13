#include <stdio.h>
#include<stdlib.h>
/*Comentario
Programa que realiza la suma de dos matrices cuadradas de 3x3.
Fecha:11-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int f;
	int c;
	int im[3][3];
	int iSumatoria[3][3];	
	int m2[3][3];
	int i,j;
	
	printf("Ingrese valores de la primer matriz\n");
	
	f=3;
	c=3;
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{		
			scanf("%d",&im[i][j]);
		}		
	}	
	printf("\n");
	printf("Ingrese valores de la segunda matriz\n");
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{		
			scanf("%d",&m2[i][j]);
		}		
	}	
	printf("\n");
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{	
			iSumatoria[i][j]=m2[i][j]+im[i][j];
			printf(" %d ",iSumatoria[i][j]);
		}
		printf("\n");
	}
	return 0;
}
