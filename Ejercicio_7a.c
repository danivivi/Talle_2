#include <stdio.h>
#include<Conio.h>
/*Comentario
Programa que define un vector y suma sus elementos.
Fecha:4-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	int iVec[]={1,2,3,4,5};
	int iSumatoria;
	int i;
	
	iSumatoria=0;
	
	for(i=0;i<=4;i++)
	{
		iSumatoria+=iVec[i];		
	}
	printf("\nLa Suma de los elementos del Vector es: %d\n",iSumatoria);	
	return 0;
}

