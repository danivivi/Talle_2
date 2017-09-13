#include <stdio.h>
/*Comentario
Programa que devuelve la sumatoria de los numeros Impares del 1 al 50
Fecha:02-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/


int main()
{
	int iNum;
	int iSumatoria;
	
	iNum=0;
	iSumatoria=0;
	
	printf("Sumatoria de los numeros pares del 1 al 50\n");
	
	while(iNum<=50)
	{
		if(iNum%2==1)
		{
			iSumatoria=iNum+iSumatoria;
		}
		iNum++;		
	}
	printf("%d\n",iSumatoria);	
	return 0;
}
