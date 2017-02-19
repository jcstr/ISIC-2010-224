/*
	Indireccion
	intercambio de a y b
*/

#include <stdio.h>

int main() {
	int a = 21;
	int b = 66;
	
		printf("%d\n", a); //a 
		printf("%d\n", b); //b

		/* intercambio */
		int x = a;
		a = b;
		b = x;

		printf("%d\n", a); //a 
		printf("%d\n", b); //b

	return 0;
}

//p -> c - 6 ;
