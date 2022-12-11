#include <stdio.h>
#include <stdlib.h>

/* 

Escrever um programa que permita ao usuario digitar um dia e um mes, com base nestes dados de entrada, o 
programa deve imprimir a estação do ano ( verao,outono,inverno ou primavera) correspondente a data de entrada.
as datas que marcam o inicio de cada estação sao dadas por: 
22/12- 20/3 verao
21/3 - 21/6 outono
22/6 - 21/9 inverno
22/9 - 21/12 primavera 

*/


char * Estacao (int dia, int mes){
	
	if (mes== 3){
		if(dia <= 20)
			return "verao";
		else 
			return "outono";
	}
	
		if (mes== 12){
		if(dia <= 21)
			return "primavera";
		else 
			return "verao";
	}
	
		if (mes== 6){
		if(dia <= 21)
			return "outono";
		else 
			return "inverno";
	}
			if (mes== 9){
		if(dia <= 21)
			return "inverno";
		else 
			return "primavera";
	}
	
		if (mes < 3)
			return "verao";
		else if (mes > 3 && mes < 6)
			return "outono";
		else if (mes > 6 && mes < 9 )
			return "inverno";
		else 
		 	return "primavera";
	
	
	
	
	
}

int main(void) {
	
	int dia, mes;
		
	printf ("Por favor digite o dia de hoje:");
		scanf ("%d", &dia);
		
	printf ("Por favor digite o mes de hoje:");
		scanf ("%d", &mes);
		
	printf (Estacao(dia,mes));
		
	return 0;
}
