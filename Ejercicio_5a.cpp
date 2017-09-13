#include <stdio.h>
/*Comentario
Programa que devuelve la suma de los cuadrados desde 1 hasta 10
Fecha:02-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/


int main()
{
	int i;
	int iCuadrado;
	int iSuma;
	
	iSuma=0;
	
	for(i=1;i<=10;i++)
	{		
		iCuadrado=i*i;
		iSuma=iSuma+iCuadrado;		
	}
	printf("%d\n",iSuma);
	return 0;
}
