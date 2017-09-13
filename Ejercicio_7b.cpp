#include <stdio.h>
#include<Conio.h>
/*Comentario
Programa que define un vector y calcula la multiplicacion acumulada de sus 
elementos.
Fecha:5-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	int iVec[]={1,2,3,4,5};
	int iMultiplicacion;
	int i;
	
	iMultiplicacion=1;
	
	for(i=1;i<=5;i++)
	{
		iMultiplicacion=iMultiplicacion*iVec[5];
	}
	printf("\nLa Multiplicaion acumulada de los elementos del Vector es: %d\n",iMultiplicacion);	
	return 0;
}
