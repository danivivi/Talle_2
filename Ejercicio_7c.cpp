#include <stdio.h>
/*Comentario
Programa que muestra en pantalla los numeros del vector y sus indices 
asociados.
Fecha:5-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	int iVec[5];
	int i;
	int iNum;
	
	printf("Ingrese elementos del vector:\n");
	
	for(i=0;i<=4;i++)
	{
		scanf("%d",&iNum);
		iVec[i]=iNum;
	}
	for (i=0;i<=4;i++)
	{
	   printf("\n El numero %d esta en Posicion ==> %d\n",iVec[i],i);
	}
	return 0;
}
