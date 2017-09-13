#include <stdio.h>
/*Comentario
Programa que devuelve el mayor de tres numeros
Fecha:31-Agosto-2017
Elaborado: Viviana Rojas Ruiz*/
int main()
{
	int inum1;
	int inum2;
	int inum3;
	int iMayor;
	
	scanf("%d",&inum1);
	scanf("%d",&inum2);
	scanf("%d",&inum3);
	
	iMayor=inum1;
	
	if(inum2>iMayor)
	{
		iMayor=inum2;
	}if(inum3>iMayor)
	{
		iMayor=inum3;
	}
	printf("\n El numero Mayor es: %d \n",iMayor);
	return 0;
}

