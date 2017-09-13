#include <stdio.h>
/*Comenteario
Programa que muestra en pantalla los numeros del 1 hasta el 10
Fecha:1-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	int inum;
	
	inum=1;
	
	printf("\nNumeros del 1 hasta el 10 \n");
	
	while(inum<=10)
	{
		printf("%d\n",inum);
		inum=inum+1;		
	}
	return 0;
}

