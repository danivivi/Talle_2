#include <stdio.h>
/*Comentario
Programa que devuelve la tabla de multiplicar de un numero
Fecha: 31-Agosto-2017
Elaborado: Viviana Rojas Ruiz*/
int main() {
	int inum;
	int ia;
	int ib;
	int ic;
	int id;
	int ie;
	int ig;
	int ih;
	int ii;
	int ij;
	int ik;
	
	
	printf("\nIngrese un numero:\n");
	scanf("%d",&inum);
	
	ia=inum*1;
	ib=inum*2;
	ic=inum*3;
	id=inum*4;
		ie=inum*5;
		ig=inum*6;
		ih=inum*7;
		ii=inum*8;
		ij=inum*9;
		ik=inum*10;
		
	printf("%d * %d ==> %d \n",inum,1,ia);
	printf("%d * %d ==> %d \n",inum,2,ib);
	printf("%d * %d ==> %d \n",inum,3,ic);
	printf("%d * %d ==> %d \n",inum,4,id);
	printf("%d * %d ==> %d \n",inum,5,ie);
	printf("%d * %d ==> %d \n",inum,6,ig);
	printf("%d * %d ==> %d \n",inum,7,ih);
	printf("%d * %d ==> %d \n",inum,8,ii);
	printf("%d * %d ==> %d \n",inum,9,ij);
	printf("%d * %d ==> %d \n",inum,10,ik);
	return 0;
}

