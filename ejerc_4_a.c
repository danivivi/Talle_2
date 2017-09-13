#include <stdio.h>
/*Comentario
Programa que lee numeros hasta que se ingresa el 0
Fecha:2-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int main() {
	int iNum;
	int iContador;
	iContador=0;
	do {
		printf("ingrese numeros");
		scanf("%d",&iNum);
		if (iNum>0){
		iContador++;
		}
	}while(iNum!=0);
	printf("la cantidad de numeros ingresados mayores que 0 es %d",iContador);
	return 0;
}

