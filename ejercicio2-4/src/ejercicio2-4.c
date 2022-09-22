/*
 ============================================================================
 Name        : ejercicio2-4.c
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
	int numeroMenor;
	int numeroMayor;
	int parMayor;
	int negativosProducto = 1;
	int posicionMayor = 0;
	int i = 0;
	int bandera = 0;
	int banderaPar = 0;

	for(i = 1; i < 9; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);
		while(numeroIngresado == 0)
		{
			printf("ERROR. Ingrese un numero distinto de cero: ");
			scanf("%d", &numeroIngresado);
		}

		if(numeroIngresado < numeroMenor || bandera == 0)
		{
			numeroMenor = numeroIngresado;
		}
		if (numeroIngresado > numeroMayor || bandera == 0)
		{
			numeroMayor = numeroIngresado;
			posicionMayor = i;
			bandera = 1;
		}

		if (numeroIngresado%2 == 0)
		{
			if(numeroIngresado > parMayor || banderaPar == 0)
			{
				parMayor = numeroIngresado;
				banderaPar = 1;
			}
		}

		if (numeroIngresado < 0)
		{
			negativosProducto = negativosProducto * numeroIngresado;
		}
	}

	printf("El menor numero ingresado fue: %d", numeroMenor);
	printf("\nEl mayor numero par ingresado fue: %d", parMayor);
	printf("\nEl producto de los numeros negativos es: %d", negativosProducto);
	printf("\nEl mayor numero fue ingresado en la posicion %d", posicionMayor);
}
