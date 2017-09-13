#include <stdio.h>
/*Comentario
Programa que mira si coincide un numero ingresado con los otros
Fecha:31-Agosto-2017
Elaborado: Viviana Rojas Ruiz*/
int main()
{
	int inum1;
	int inum2;
	int inum3;
	int inum4;
	
	printf("\n Ingrese tres numeros: \n");
	scanf("%d",&inum1);	
	scanf("%d",&inum2);	
	scanf("%d",&inum3);
	printf("\n Ingrese el numero a buscar: \n");
	scanf("%d",&inum4);	
	
	if(inum1==inum4||inum2==inum4||inum3==inum4)
	{
		printf("El numero Coincide\n");
	}else{
		printf("El numero no Coincide");
	}	
	return 0;
}
