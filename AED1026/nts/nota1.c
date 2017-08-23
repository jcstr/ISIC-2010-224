/*
 *	Punteros y Arrays
 *	
 */

#include <stdio.h>

int main() {
	int list[10] = {4, 5, 2, 8, 10, 2, 6, 2, 1, 9};
	int *i = &list[0]; // or in *i = list
	
	char *message = "hola mundo";
	char *c = message;

	for(int i = 0; i < 10; i++ ) {
		printf("%i\n", *(list + i)); /* indireccion */
	}
}
