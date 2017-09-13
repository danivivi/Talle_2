#include <stdio.h>
/*Comentario
Programa que devuelve la suma de los numeros del 1 hasta el 100
Fecha:02-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	int iNum;
	int iSumatoria;
	
	iSumatoria=0;
	iNum=0;
	
	printf("Sumatoria de los numeros del 1 hasta el 100\n");

	while(iNum<100)
	{		
		iNum++;
		iSumatoria=iSumatoria+iNum;		
	}
	printf("%d\n",iSumatoria);	
	return 0;
}

