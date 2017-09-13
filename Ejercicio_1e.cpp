#include <stdio.h>
/*Comentario
Programa que devuelve la cantidad de dinero
Fecha:31-Agosto-2017
Elaborado:Viviana Rojas Ruiz*/

int main()
{
	float fValor;
	int iCantidad;
	float fTotal;
	
	printf("\nIngrese el Valor actual del Dolar: \n");
	scanf("%f",&fValor);
	
	printf("\n Ingrese la Cantidad de Dolares: \n");
	scanf("%d",&iCantidad);
	
	fTotal=fValor*iCantidad;
	
	printf("El valor total de Dolares es: %f \n",fTotal);
	
	
	return 0;
}

