#include <stdio.h>
/*Comentario
Programa que toma cada 4 horas la temperatura por 24 horas y muestra la temperatura
media, alta y baja del dia.
Fecha:3-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	float fTem;
	int i;
	float fSumatoria;
	float fMayor;
	float fMenor;
	float fMedia;
	
	fSumatoria=0;
	fMayor=-1;
	fMenor=999;

	for(i=1;i<=6;i++)
	{
		printf("Ingrese temperatura:\n");
		scanf("%f",&fTem);
		fSumatoria=fSumatoria+fTem;
		fMedia=fSumatoria/6;
		
		if(fTem>fMayor)
		{
			fMayor=fTem;
		}
		if(fTem<fMenor)
		{			
			fMenor=fTem;
		}		
	}	
	printf("La temperatura Media es:%f\n",fMedia);
	printf("La temperatura Mayor es:%f\n",fMayor);
	printf("La temperatura Menor es:%f\n",fMenor);	
	return 0;	
}
