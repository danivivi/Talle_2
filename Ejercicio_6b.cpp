#include <stdio.h>
/*Comentario
Programa que lee una letra y dice si es una vocal mayuscula o miniscula o es 
una consonante.
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
		printf("La Letra es una Vocal Minuscula\n");
		break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		printf("La Letra es una Vocal Mayuscula\n");
		break;
	default:
		printf("La Letra es una Consonante\n");
	}
	return 0;
}
