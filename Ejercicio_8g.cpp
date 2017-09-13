#include<stdio.h>
/*Comentario
Programa que muestra si una matriz es simetrica o no.
Fecha:11-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/
int main (){
	
	int iMatris[100][100];
	int iFilas,iColumnas;
	int iFi,iCo;
	int r=0;
	
	printf("Ingrese numero de filas\n");
	scanf("%d", &iFilas);
	printf("Ingrese numero de columnas\n");
	scanf("%d", &iColumnas);	
	
	printf("Digite un numero para llenar matris \n");
	
	for (iFi=0;iFi<iFilas;iFi++){
		for (iCo=0;iCo<iColumnas;iCo++)
		{			
			scanf("%d", &iMatris[iFi][iCo]);
		}		
	}
	
	if(iFilas==iColumnas)
	{
		for (iFi=0;iFi<iFilas;iFi++)
		{
			for (iCo=0;iCo<iColumnas;iCo++)
			{				
				if(iMatris[iFi][iCo]==iMatris[iCo][iFi])
				{
					r=1;
				}	
			}	
		}
	}
	
	if (r==1)
	{
		printf("Matriz Simetrica ");
		
	}else{
		printf("Matriz NO Simetrica ");
	}
	return 0;
}
