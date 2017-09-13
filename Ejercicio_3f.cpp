#include <stdio.h>
/*Comentario
Programa que devuelve la solucion del numero Fibonacci
Fecha:02-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/


int main()
{
	int iNum;
	int iFib1;
	int iFib2;
	int iFib;
	int in;
	int iSumatoria;
	
	in=1;
	iFib1=0;
	iFib2=1;
	iSumatoria=0;
	
	
	printf("Ingrese un numero: \n");
	scanf("%d",&iNum);
	printf("Secuencia de los numeros Fibonacci hasta %d \n",iNum);
	
	while(in<=iNum)
	{
		printf("%d\n",iFib1);
		iFib=iFib1+iFib2;
		iFib1=iFib2;
		iFib2=iFib;
		in++;
		iSumatoria=iSumatoria+iFib1;
	}
	printf("El total de la serie es: %d\n",iSumatoria);
	return 0;
}
