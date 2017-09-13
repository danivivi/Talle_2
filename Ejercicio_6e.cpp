#include <stdio.h>
/*Comentario
Programa que simula un cajero automatico.
Fecha:4-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	int iOpcion;
	int iCuenta;
	int iAbono;
	int iSaldo;
	int iRetiro;
	
	printf("Ingrese 1. Para Abonar o 2. Para Retirar  :\n");
	scanf("%d",&iOpcion);
	
	iCuenta=1000000;	
	
	switch(iOpcion)
	{
	case 1:
		printf("Ingrese Valor de Abono:\n");
		scanf("%d",&iAbono);
		iSaldo=iCuenta+iAbono;
		printf("Su Saldo es de: %d\n",iSaldo);
		break;
	case 2:
		printf("Ingrese Valor de Retirar:\n");
		scanf("%d",&iRetiro);
		iSaldo=iCuenta-iRetiro;
		printf("Su Saldo es de: %d\n",iSaldo);
	}
	return 0;
}
