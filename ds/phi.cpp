/*
 *	calcular el numero 'phi'
 *	2 parametros:
 *		1) cantidad de iteraciones de la funcion
 *		2) cociente del divisor de la funcion
 */

#include <iostream>
#include <cstdio>

float phi(int iteraciones, int cociente)
{
	if(iteraciones == 0 || iteraciones == 1) {
		return cociente;
	} else {
		return 1.0 + 1.0 / phi(--iteraciones, cociente); 
	}
}

int main()
{
	int iteraciones, cociente;
	
		printf("iteraciones: ");
			scanf("%i", &iteraciones);

		printf("cociente: ");
			scanf("%i", &cociente);

		printf("phi = %f\n", phi(iteraciones, cociente));	
}
