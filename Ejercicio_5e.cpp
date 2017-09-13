#include <stdio.h>
/*Comentario
Programa que calcula la sumatoria de la resta de los numeros impares y pares.
Fecha:3-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int iPares;
	int i;
	int iNum;
	int iSumatoria;
	int iImpares;
	int j;
	int iSumaNegativos;
	
	printf("Ingrese un Numero:\n");
	scanf("%d",&iNum);
	
	iImpares=0;
	iSumaNegativos=0;
	
	for(i=1;i<iNum;i+=2)
	{	
	    iImpares+=i;
	}
	printf("\n");	
	for(j=2;j<=iNum;j+=2)
	{	
		iPares=j*(-1);
		iSumaNegativos+=iPares;
	}	
	iSumatoria=iImpares+iSumaNegativos;
	printf("El Total de la Sumatoria es: %d\n",iSumatoria);	
	return 0;	
}
