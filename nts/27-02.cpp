/*
	27/02/2017 07:26
	
	--
	The tower of hanoi
	es un rompecabezas que consiste en apilar n discos de 
	diferente diametro en orden decreciente

	reglas:
	1.- solo se puede mover un disco a la vez
	2.- solo puede moverse el disco a la cima de la pila
	3.- un disco no puede descanzar, todos deben moverse

	 ***
		objetivo, transferir 'n' discos de la pila 'a' a la pila 'c'
	 ***

	%%%
	Strategy
	 1 transfer n - 1 discs from rod A to rod B
	 2 transfer the last disco from rod A to rod C
	 3 transfer n - 1 discs from B to rod C
	%%%
	--
	la secuencia de fibonacci
	es la serie de numeros *(fi)* para i >= 1 como:

		 	{ 1	for i = 1
		fi	{ 1 for i = 2
			{ fi-1 + fi-2 for i > 2
	--		
	--- Programacion dinamica
	
	--
	The golden ratio 
	Sean AC = AB + BC. Sean |AB| = a y |BC| = b.
	Decimos que los segmentos AB y BC estan en proporcion aurea
	si 'a' + 'b' es a lo que 'a' es a 'b'
	--

*/

#include <iostream>
/*
	riesgos de recursividad --no lineal--
*/
long count;

long fibo(int i)
{
	count++;

	if(i == 1 || i == 2) {
		return 1;
	}

	return fibo(i - 1) + fibo(i - 2);
}

long fibo_2(int i) {
	
	long a = 1;
	long b = 1;
	long resultado = 0;
		
		if(i == 1 || i == 2) {
			return 1;
		}
		
		for(int j = 2; j <= i; j++) {
			resultado = a + b;
			a = b;
			b = resultado;
		}

		return resultado;

}

int main(int argc, const char * argv[])
{
	int i; // ?
	long a, b;
	scanf("%i", &i);

	//long f = fibo(i);

	/**/

//	for(int j = 1; j <= i; j++) {
		
//		count = 0;

		//long f = fibo(j);

		//printf("%3i: %7li %7li\n", j, f, count);	
//		pritnf("", j, f);
//	}

	//printf("%li\n", f);

	/* cocientes sucesivos de la serie de fibonacci == se acerca a el numero phi*/
	for(int j = 0; j <= i; j++) {
		if(j == 1) {
			a = 1;
		}
		b = fibo(j);

		printf("%f", (float) b / a);

		a = b;
	}

	return 0;
}
