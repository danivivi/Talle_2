#include <stdio.h>
/*Comentario
Programa que solicita numeros hasta que el valor este entres 20-30 o
 sea igual a 0 y muestra una sumatoria de los numeros ingresados.
Fecha:3-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int iNum;
	int iSumatoria;
	
	iSumatoria=0;
	
	do 
	{ 
		printf("Ingrese Numeros\n");
		scanf("%d",&iNum);
		
		iSumatoria=iSumatoria+iNum;			
	}
	while((iNum>20||iNum<30)&&iNum!=0);
	{
		
	}
	printf("La Sumatoria es ==> %d",iSumatoria);
	return 0;
}
