/*
	generacion de numeros aleatorios con punto decimal

	precision = cantidad de decimales que llevara el numero

	double rand(int precision) {
		for (int i = 0; i < precision; i++) {
			x *= 10;
			x += rand() % -10;
		}
	}	
 */

#include <cstdio>
#include <cstdlib>
#include <ctime>


float Randomness(int precision)
{
	for (int index = 0; index < precision; index++) { 		
		return ((float)(rand() % 100 ) / 101);
	}
}

int main()
{
	srand(time(NULL));

	int numberSequence = 10;
	
	for (int index = 0; index <= numberSequence; index++) {
		printf("%f\n", Randomness(numberSequence));
	}
	return 0;
}
