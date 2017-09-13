#include <stdio.h> 

/*Comentario
Programa que pide al usuario una cadena de caracteres la almacena en un arreglo
y la copia en otra para mostrarla en pantalla. 
Fecha:12-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	char nombre[30];
	char nombre2[30];
	char i;
	
	printf("Ingrese caracteres\n");
	fgets(nombre,30,stdin);
	
	for(i=0;i<=30;i++)
	{
		nombre2[i]=nombre[i];		
	}
    printf("Mostrando Cadena 2\n");
	printf("%s",nombre2);
	return 0;
}
