#include <stdio.h>
/*Comentario
Programa que devuelve el area, diametro y longitud de una Circunferencia
Fecha: 27-Agosto-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	float fPi;
	float fArea;
	float fDiametro;
	float fLongitud;
	float fRadio;
	
	fPi=3.1416;
	
	printf("\n Ingrese el valor del radio de la circunferncia: \n");
	scanf("%f", &fRadio);
	
	fArea=fPi*(fRadio*fRadio);
	fDiametro=2*fPi;
	fLongitud=2*fPi*fRadio;
	
	printf("\n Circunferencia con Radio: %f \n", fRadio);
	printf("\n El Area de la circunferencia es de: %f \n", fArea);
	printf("\n El Diametro de la circunferencia es de: %f \n", fDiametro);
	printf("\n La Longitud de la circunferencia es de: %f \n", fLongitud);
	return 0;
}
