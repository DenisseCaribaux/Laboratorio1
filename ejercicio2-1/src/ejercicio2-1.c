/*
 ============================================================================
 Name        : ejercicio2-1.c
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

	int numero;
	int acumulador = 0;
	int promedio;
	int i = 0;

	for(i = 0; i < 7; i++){

		printf("Ingrese un numero negativo: ");
		scanf("%d", &numero);

		while(numero >= 0){
			printf("ERROR. Ingrese un numero negativo: ");
			scanf("%d", &numero);
		}

		acumulador = acumulador + numero;

	}

	promedio = acumulador / i;

	printf("El promedio de los numeros ingresados es: %d", promedio);

	return 0;
}
