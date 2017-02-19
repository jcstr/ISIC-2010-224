/*
	manejo memoria dinamica 
	un objeto puede crearse en tiempo de ejecucion usando el operador 'new'
	'malloc' en C, esta operacion retorna la referencia del objeto recientemente creado

	este nuevo objeto puede unicamente ser llamado indirectamente (indireccion)
*/

#include <stdio.h>

int main() {
	int *list = new int[10];
}

/*
	un objeto creado de esta manera debe ser destruido usando 'delete' (c++) o la funcion free (c)
*/
