#include <stdio.h>

/*Comentario
Programa que lee las 3 notas de 5 estudiantes, muestra alumnos que aprobaron
todos los examenes, los que aprobraron al menos uno y los que aprobaron solo 
el ultimo examen.
Fecha:3-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() 
{
	int i;
	int j;
	float fNota1;
	float fNota2;
	float fNota3;
	int iContador;
	int iContador2;
	int iContador3;
	
	iContador=0;
	iContador2=0;
	iContador3=0;
	
	for(i=1;i<=5;i++)
	{
		
		printf("Ingrese nota 1: \n ");
		scanf("%f",&fNota1);
		printf("Ingrese nota 2: \n ");
		scanf("%f",&fNota2);
		printf("Ingrese nota 3: \n ");
		scanf("%f",&fNota3);		
		if(fNota1>=3.0&&fNota2>=3.0&&fNota3>=3.0)
		{
			iContador++;			
		}
		
		if(fNota1>=3.0||fNota2>=3.0||fNota3>=3.0)
		{
			iContador2++;			
		}
		if(fNota3>=3.0)
		{
			iContador3++;			
		}
	}
	printf("Estudiantes que Aprobaron los tres examenes:%d\n",iContador);
	printf("Estudiantes que Aprobaron al menos un examen:%d\n",iContador2);
	printf("Estudiantes que Aprobaron solo el ultimo examen:%d\n",iContador3);
	return 0;	
}
