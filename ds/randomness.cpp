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
 	int aux;
	int decimal = 11;

	for (int index = 1; index < precision; index++) {
//		decimal = 11;
		aux = (rand() % decimal);
		return aux / float(decimal);
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
