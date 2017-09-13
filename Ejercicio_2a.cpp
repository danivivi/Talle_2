#include <stdio.h>
/*Comentario
Programa que determina el numero mayor
Fecha:31-Agosto-2017
Elaborado: Viviana Rojas Ruiz*/
int main()
{
	int inum1;
	int inum2;
	
	scanf("%d",&inum1);
	scanf("%d",&inum2);
	
	if(inum1>inum2)
	{
		printf("\n El numero Mayor es: %d \n", inum1);
		
	}else{
		printf("\n El numero Mayor es: %d \n", inum2);
	}	
	return 0;
}

