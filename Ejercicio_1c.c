#include <stdio.h>
/*Comentario
Programa que calcula el salario de un empleado.
Fecha:5-Septiembre-2017
Elaborado por:Viviana Rojas Ruiz*/

int main() 
{
	int iDiurnas;
	int iNocturnas;
	int iDominicales;
	int iFestivos;
	int iHoraDiu;
	int iHoraNoc;
	int iHoraDoc;
	int iHoraFes;
	int iValor;
	int iTotal;
	
	iValor=2500;
	
	printf("Ingrese Horas Diurnas:\n");
	scanf("%d",&iHoraDiu);
	printf("Ingrese Horas Nocturnas:\n");
	scanf("%d",&iHoraNoc);
	printf("Ingrese Horas Dominicales:\n");
	scanf("%d",&iHoraDoc);
	printf("Ingrese Horas Festivos:\n");
	scanf("%d",&iHoraFes);
	
	iDiurnas=iValor*iHoraDiu;
	iNocturnas=(iValor*0.35)+iValor;
	iDominicales=(iValor*0.50)+iValor;
	iFestivos=(iValor*0.75)+iValor;
	iTotal=iDiurnas+iNocturnas+iDominicales+iFestivos;
	
	printf("El Valor de las horas Diurnas es: %d\n",iDiurnas);
	printf("El Valor de las horas Nocturnas es: %d\n",iNocturnas);
	printf("El Valor de las horas Dominicales es: %d\n",iDominicales);
	printf("El Valor de las horas Festivos es: %d\n",iFestivos);
	printf("El Valor total de las horas es: %d\n",iTotal);	
	return 0;
}

