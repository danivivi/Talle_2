#include <stdio.h>
/*Comentario
Programa que devuelve el factorial de un numero
Fecha:02-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/


int main()
{
	int iNum;
	int iFac;
	int in;
	
	iFac=1;
	in=1;
	
	printf("Ingrese un numero para ver su Factorial\n");
	scanf("%d",&iNum);
	
	while(in<=iNum)
	{
		iFac=iFac*in;
		in=in+1;
	}
	printf("%d\n",iFac);	
	return 0;
}
