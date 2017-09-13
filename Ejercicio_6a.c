#include <stdio.h>
/*Comentario
Programa que lee un vocal y muestra si es mayuscula o no.
Fecha:4-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	char cVocal;
	
	printf("Ingrese una vocal:\n");
	scanf("%c",&cVocal);
	
	switch(cVocal)
	{
	 case 'a':
	 case 'e':
	 case 'i':
	 case 'o':
	 case 'u':
		printf("La Vocal es Minuscula\n");
		break;
	default:
		printf("La Vocal es Mayuscula\n");
	}
	return 0;
}

