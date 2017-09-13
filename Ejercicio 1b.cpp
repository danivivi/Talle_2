#include <stdio.h>
/*Comentario
Programa que devuelve el area de un Triangulo
Fecha: 27-Agosto-2017
Elaborado por: Viviana Rojas Ruiz
*/

int main() 
{
	float fBase;
	float fAltura;
	float fArea;
	
	printf("\n Ingrese la base del triangulo: \n");
	scanf("%f", &fBase);
	
	printf("\n Ingrese la altura del triangulo: \n");
	scanf("%f", &fAltura);
	
	fArea=(fBase*fAltura)/2;
	
	printf("\n Base del Triangulo: %f \n", fBase);
	printf("\n Altura del Triangulo: %f \n", fAltura);
	printf("\n El Area del Triangulo es: %f \n", fArea);
	return 0;
}
