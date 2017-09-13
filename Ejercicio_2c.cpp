#include <stdio.h>
/*Comentario
Programa que devuelve si un numero es par o impar
Fecha:31-Agosto-2017
Elaborado: Viviana Rojas Ruiz*/
int main()
{
	int inum1;
	
	scanf("%d",&inum1);	

	if(inum1%2==0)
	{
		printf("El numero es Par %d \n",inum1);
	}else{
		printf("El numero es Impar %d \n",inum1);
	}

	return 0;
}
