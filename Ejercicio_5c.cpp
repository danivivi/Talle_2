#include <stdio.h>
/*Comentarios
Programa que muestra la sumatoria de los numeros
Fecha:2-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int i;
	int iAcumulador;
	int iNum;
	
	iAcumulador=0;
	
	printf("Ingrese un numero:\n");
	scanf("%d",&iNum);
	
	for(i=1;i<=iNum;i++)
	{
		iAcumulador=iAcumulador+i;		
	}
	printf("La sumatoria de los numeros es: %d \n",iAcumulador);
	return 0;
}
