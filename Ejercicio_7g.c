#include <stdio.h>
/*Comentario
Programa que copia el contenido de dos vectores en uno y muestra su contenido en
pantalla.
Fecha:11-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main(void) 
{
	char nombre[]={'v','i','v','i','a','n','a',' '};
	char apellido[]={'R','o','j','a','s'};
	char completo[13];
	char i;
	
	for(i=0;i<8;i++)
	{
		completo[i]=nombre[i];		
	}
	for(i=8;i<13;i++)
	{
		completo[i]=apellido[i-8];
	}
	for(i=0;i<13;i++)
	{
		printf("%c",completo[i]);		
	}	
	return 0;
}
