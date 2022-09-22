/*
 ============================================================================
 Name        : ejercicio1-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingresar el primer numero: ");
	scanf("%d", &numeroUno);
	printf("Ingresar el segundo numero: ");
	scanf("%d", &numeroDos);
	printf("Ingresar el tercer numero: ");
	scanf("%d", &numeroTres);


	if(numeroUno > numeroDos && numeroUno > numeroTres){
			printf("El mayor de los numeros es el primero: %d", numeroUno);
	}
	else if(numeroDos > numeroUno && numeroDos > numeroTres){
			printf("El mayor de los numeros es el segundo: %d", numeroDos);
	}
	else if(numeroTres > numeroUno && numeroTres > numeroDos){
			printf("El mayor de los numeros es tercero: %d", numeroTres);
	}

	return 0;

}
