#include <stdio.h>
#include<math.h>
/*Comentario
Programa que segun opcion muestra el cuadrado o si el numero es par o impar.
Fecha:4-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	int iOpcion;
	int iNum;
	int iCuadrado;
	int iPares;
	int iImpares;
	
	printf("Ingrese un numero:\n");
	scanf("%d",&iNum);
	
	printf("Ingrese\n");
	printf("1. Para saber el Cubo del numero\n");
	printf("2. Para saber si es Par o Impar\n");
	printf("3.Salir\n");	
	scanf("%d",&iOpcion);
	
	switch(iOpcion)
	{
	case 1:
		iCuadrado=pow(iNum,2);
		printf("El Cuadrado del Numero es ==> %d\n",iCuadrado);     
		break;
	case 2:
		if(iNum%2==0)
		{
			iPares=iNum;
			printf("El Numero es Par\n");
		}else{
			iImpares=iNum;
			printf("El Numero es Impar\n");
		}     
		break;
	case 3:
		printf("<<<Gracias>>>\n");
		break;
	}
	return 0;
}
