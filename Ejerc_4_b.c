#include <stdio.h>
/*Comentario
Programa que solicita un numero y muestra su tabla de multiplicar
Fecha:3-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int iNum;
	int in;
	int iTabla;
	
	in=0;
	
	printf("Ingrese un numero del 1 al 10\n");
	scanf("%d",&iNum);
	printf("Tabla de Multiplicar del Numero: %d\n",iNum);
	do 
	{ 
		in++;
		iTabla=iNum*in;		
		printf("%d * %d ==> %d\n",iNum,in,iTabla);
	}
	while(in<=9);
	{		
		
	}	
	return 0;
}

