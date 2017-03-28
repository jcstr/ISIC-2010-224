/*
 *	main.cpp
 */

#include <cstdio>
#include <cstdlib>
#include <ctime>

#include "queue.h"

int main() 
{	
	srand((unsigned)time(NULL));

	queue cola(10);
	
	/* random number */
	int randomNumber = rand() % 20 + 1;

	printf("#s of data: %i\n\n", randomNumber);

	for (int index = 0; index < randomNumber; index++) {
		int data = rand() % 100 + 1;
		printf("Push: %i\n", data);

		cola.enqueue(data);
	}
	printf("\nEmptying...\n\n");

	while (!cola.empty()) {
		printf("Pop: %i\n", cola.pop());
	}
	
	return 0;
}

