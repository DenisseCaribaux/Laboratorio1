/*
 ============================================================================
 Name        : ejercicio2-2.c
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
	int positivosAcumulador = 0;
	int positivosContador = 0;
	int positivosPromedio;
	int positivosMenor = 0;
	int banderaPositivos = 0;

	int negativosAcumulador = 0;
	int negativosContador = 0;
	int negativosPromedio;
	int negativosMayor = 0;
	int banderaNegativos = 0;

	char respuesta = 's';

	do
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);

		if(numeroIngresado > 0)
		{
			positivosAcumulador = positivosAcumulador + numeroIngresado;
			positivosContador ++;

			if(numeroIngresado < positivosMenor || banderaPositivos == 0)
			{
				positivosMenor = numeroIngresado;
				banderaPositivos = 1;
			}

		}
		else if (numeroIngresado < 0)
		{
			negativosAcumulador = negativosAcumulador + numeroIngresado;
			negativosContador ++;

			if(numeroIngresado > negativosMayor || banderaNegativos == 0)
			{
				negativosMayor = numeroIngresado;
				banderaNegativos = 1;
			}
		}

		printf("¿Desea ingresar mas numeros? s/n");
		fflush(stdin);
		scanf("%c", &respuesta);
		while(respuesta != 's' && respuesta != 'n')
		{
			printf("ERROR. Ingresar s ó n");
			fflush(stdin);
			scanf("%c", &respuesta);
		}


	} while (respuesta == 's');

	positivosPromedio = positivosAcumulador / positivosContador;

	negativosPromedio = negativosAcumulador / negativosContador;

	printf("El promedio de los numeros positivos es: %d y su minimo es: %d ", positivosPromedio, positivosMenor);

	printf("\nEl promedio de los numeros negativos es: %d y su maximo es: %d", negativosPromedio, negativosMayor);

}
