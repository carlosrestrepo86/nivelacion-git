/*
 * funciones.c
 *
 *  Created on: 21/07/2026
 *      Author: c_and
 */

#include "funciones.h"

void esPar(int n) {
	if (n % 2 == 0) {
	    printf("%d es un número par.\n", n);
	} else {
	    printf("%d es un número impar.\n", n);
	}

	printf("Este print se agrego para los cambios de la cuarta version\n\r");
}

int factorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

