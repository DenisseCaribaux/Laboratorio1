/*
 ============================================================================
 Name        : ejercicio1-3.c
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
			if(numeroDos > numeroTres){
				printf("El numero del medio es: %d", numeroDos);
			}
			else
			{
				printf("El numero del medio es: %d", numeroTres);
			}
	}
	else
	{
		if(numeroDos > numeroUno && numeroDos > numeroTres){
				if(numeroUno > numeroTres){
					printf("El numero del medio es: %d", numeroUno);
				}
				else
				{
					printf("El numero del medio es: %d", numeroTres);
				}
		}
		else
		{
			if(numeroTres > numeroUno && numeroTres > numeroDos){

				if(numeroUno > numeroDos){
					printf("El numero del medio es: %d", numeroUno);
				}
				else
				{
					printf("El numero del medio es: %d", numeroDos);
				}
			}
		}

	}

	if(numeroUno == numeroDos || numeroUno == numeroTres){
		printf("No hay numero del medio.");
	}
	else if(numeroDos == numeroUno || numeroDos == numeroTres){
		printf("No hay numero del medio.");
	}

	return 0;

}
