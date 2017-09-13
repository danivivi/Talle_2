#include <stdio.h>
#include<math.h>
/*Comentario
Programa que calcula la sumatoria de la potencia de 2 hasta un numero ingresado.
Fecha:3-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int iPotencia;
	int i;
	int iNum;
	int iSumatoria;
	
	iSumatoria=0;
	
	printf("Ingrese un Numero:\n");
	scanf("%d",&iNum);
	
	for(i=1;i<=iNum;i++)
	{	
		iPotencia=pow(2,i);
		iSumatoria=iSumatoria+iPotencia;		
	}
	printf("El Total de la Sumatoria es: %d\n",iSumatoria);

	return 0;	
}
