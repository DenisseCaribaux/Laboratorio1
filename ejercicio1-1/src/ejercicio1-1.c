/*
 ============================================================================
 Name        : ejercicio1-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf (stdout, NULL);

		int numeroUno;
		int numeroDos;
		int resultado;

		printf("Ingrese el primer numero:");
		scanf("%d", &numeroUno);
		while(numeroUno < -50 || numeroUno > 100){
			printf("ERROR. Ingresar un numero entre -50 y 100: ");
			scanf("%d", &numeroUno);
		}

		printf("Ingrese el primer numero:");
		scanf("%d", &numeroDos);
		while(numeroDos < -50 || numeroDos > 100){
			printf("ERROR. Ingresar un numero entre -50 y 100: ");
			scanf("%d", &numeroDos);
		}

		resultado = numeroUno + numeroDos;

		printf("La suma entre %d y %d da como resultado %d", numeroUno, numeroDos, resultado);

		return 0;
}
