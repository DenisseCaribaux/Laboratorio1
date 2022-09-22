/*
 ============================================================================
 Name        : ejercicio2-3.c
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

	int numeroIngresado;
	char respuesta = 's';

	do
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);

		if(numeroIngresado%2 == 1){
			printf("El numero ingresado es impar. ¿Desea ingresar otro numero? s/n");
			fflush(stdin);
			scanf("%c", &respuesta);
			while(respuesta != 's' && respuesta != 'n')
			{
				printf("ERROR. Ingresar s ó n");
				fflush(stdin);
				scanf("%c", &respuesta);
			}
		}
		else if(numeroIngresado%2 == 0){
			printf("El numero ingresado es par. ¿Desea ingresar otro numero? s/n");
			fflush(stdin);
			scanf("%c", &respuesta);
			while(respuesta != 's' && respuesta != 'n')
			{
				printf("ERROR. Ingresar s ó n");
				fflush(stdin);
				scanf("%c", &respuesta);
			}

		}
	} while (respuesta == 's');

}
