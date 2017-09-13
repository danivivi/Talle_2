#include <stdio.h>

/*Comentario
Programa que pide que se digite una cadena de caracteres y verifica su longitud
si supera 10 caracteres la muestra en pantalla de lo contrario no la muestra
Fecha:12-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	
	char cadena[30];
	
	int contador=0;
	int i;
	
	printf ("ingrese una cadena de caracteres:\n");
	fgets (cadena,30,stdin);
	
	for (i=0; i<=100; i++)
	{		
		if (cadena [i]!= '\0')
		{			
			contador=contador+1;
		}else{			
			break;
		}
	}
	if (contador>10)
	{		
		printf ("\n%s",cadena);
	}	
	return 0;
}

