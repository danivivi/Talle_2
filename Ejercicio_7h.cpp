#include <stdio.h>
/*Comentario
Programa que muestra la multiplicacion de los elementos de un vector en otro.
Fecha:4-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	int v1[5];
	int v2[5];
	int iMultiplicacion;
	int i;
	
	printf("Ingrese los 5 elementos del vector:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&v1[i]);	
	}
	printf("Mostrando Vector Multiplicado por 2:\n");
	for(i=0;i<=4;i++)
	{
		iMultiplicacion=v1[i]*2;
		v2[i]=iMultiplicacion;
		printf("%d\n",v2[i]);
	}	
	return 0;
}
