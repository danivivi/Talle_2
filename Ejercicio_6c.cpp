#include <stdio.h>
/*Comentario
Programa que muestre el mes del año segun el numero que ingresa el usuario.
Fecha:4-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main()
{
	int iNum;
	
	printf("Ingrese un numero del 1 al 12:\n");
	scanf("%d",&iNum);
	
	switch(iNum)
	{
	case 1:
		printf("El Numero %d Corresponde al mes de :Enero",iNum);
	case 2:
		printf("El Numero %d Corresponde al mes de :Febrero \n",iNum);
		break;
	case 3:
		printf("El Numero %d Corresponde al mes de :Marzo\n",iNum);
		break;
	case 4:
		printf("El Numero %d Corresponde al mes de :Abril\n",iNum);
		break;
	case 5:
		printf("El Numero %d Corresponde al mes de :Mayo\n",iNum);
		break;
	case 6:
		printf("El Numero %d Corresponde al mes de :Junio\n",iNum);
		break;
	case 7:
		printf("El Numero %d Corresponde al mes de :Julio\n",iNum);
		break;
	case 8:
		printf("El Numero %d Corresponde al mes de :Agosto\n",iNum);
		break;
	case 9:
		printf("El Numero %d Corresponde al mes de :Septiembre\n",iNum);
		break;
	case 10:
		printf("El Numero %d Corresponde al mes de :Octubre\n",iNum);
		break;
	case 11:
		printf("El Numero %d Corresponde al mes de :Noviembre\n",iNum);
		break;
	case 12:
		printf("El Numero %d Corresponde al mes de :Diciembre\n",iNum);		
		break;
	}
	return 0;
}
