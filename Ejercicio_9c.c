#include <stdio.h>
/*Comentario
Programa que pide al usuario dos cadenas de caracteres indica si las cadenas
son iguales de lo contrario muestra cual es la mayor alfabeticamente.
Fecha:13-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	char cadena1[30];
	char cadena2[30];
	int i=0;
	bool igual=true;
	int v1,v2;
	int acum1=0,acum2=0;
	
	printf("Ingrese Cadena 1\n");
	fgets(cadena1,30,stdin);
	printf("Ingrese Cadena 2\n");
	fgets(cadena2,30,stdin);
	
	for(i=0;i<30;i++)
	{
		if(cadena1[i]!=cadena2[i])
		{
			igual=false;
		}		
	}
	
	if(igual)
	{
		printf("Son iguales");
	}else
	{
		printf("No son iguales");
	}
	
	for(i=0;i<30;i++)
	{
		v1=cadena1[i];
		v2=cadena2[i];
		acum1+=v1;
		acum2+=v2;
	}
	
	if(acum1>acum2)
	{
		printf("Cadena1 es Mayor");		
	}else{
		printf("Cadena2 es Mayor");
	}
	
	return 0;
}

