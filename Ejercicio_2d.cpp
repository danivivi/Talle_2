#include <stdio.h>
/*Comentario
Programa que devuelve si un numero es positivo o negativo
Fecha:31-Agosto-2017
Elaborado: Viviana Rojas Ruiz*/
int main()
{
	int inum1;
	
	scanf("%d",&inum1);	
	
	if(inum1>0)
	{
		printf("El numero es Positivo %d \n",inum1);
	}else{
		printf("El numero es Negativo %d \n",inum1);
	}
	
	return 0;
}
