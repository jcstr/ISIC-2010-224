/*
 *	Indireccion de punteros
 * 	
 */


#include <stdio.h>
#include <stdlib.h>
int main() {
	char *str = "Hola mundo"; // puntero tipo char que contiene una cadena 

	/* indireccion 
	 * contador for para cada caracter de la cadena,
	 * encuenctr
	 *
	 */

	for(char *i = str; *i != '\0'; i++) {
		//putchar(*i);
		printf("%c", *i);	
	}

	printf("\n");

	return 0;
}
