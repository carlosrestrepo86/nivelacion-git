/*
 * main.c
 *
 *  Created on: 21/07/2026
 *      Author: c_and
 */
#include "funciones.h"

int temp = 0;
int num = 7;

int main(void){
	esPar(7);
	temp = factorial(num);

	printf("Factorial de %d es: %d\n\r", num, temp);

	printf("Final del programa, para la tercera version\n\r");

	temp = factorial(10);
	printf("Factorial de %d es: %d", num, temp);
}
