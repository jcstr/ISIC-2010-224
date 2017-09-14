/*
	28/02/2017
	Estructura de datos 

	Torre de hanoi
	complejidad del algoritmo = O(2^n - 1)

*/

#include <iostream>

long count;

void hanoi(int n, char source, char target, char aux) 
{
	if(n == 0) {
		return;
	}
	count++;

	hanoi(n - 1, source, aux, target);
	printf("%c -> %c\n", source, target);
	hanoi(n - 1, aux, target, source);
}

int main(int argc, const char * argv[])
{
//	int n = 3; // cantidad de discos que van de una varilla a otra
	int n;

	scanf("%i", &n);
	
	count = 0;

	hanoi(n, 'A', 'C', 'B'); // mover n discos

	printf("\nmovimientos: %i\n", count);
	return 0;
}
