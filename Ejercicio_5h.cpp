#include <stdio.h>
#include<math.h>
/*Comentario
Programa que calcula la descomposicion en numeros primos de un numero entero.
Fecha:3-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int iNum;
	int iFactor;
	
	printf("Ingrese un numero entero:\n");
	scanf("%d",&iNum);
	
	for(iFactor=2;iFactor<=iNum;iFactor++)
	{
		while(iNum%iFactor==0)
		{
			iNum/=iFactor;
			printf("La Descompsicion del numero es: %d | %d \n",iNum,iFactor);			
		}
	}
	return 0;
}
