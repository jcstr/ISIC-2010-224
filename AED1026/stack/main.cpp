/*
 *	main.cpp
 */

#include <cstdio>
#include <cstdlib>
#include <ctime>

#include "stack.h"

int main() 
{	
	srand((unsigned)time(NULL));

	stack pila(10);
	
	/* random number */
	int randomNumber = rand() % 20 + 1;

	printf("#s of data: %i\n\n", randomNumber);

	for (int index = 0; index < randomNumber; index++) {
		int data = rand() % 100 + 1;
		printf("Push: %i\n", data);

		pila.push(data);
	}
	printf("\nEmptying...\n\n");

	while (!pila.empty()) {
		printf("Pop: %i\n", pila.pop());
	}
	
	return 0;
}
