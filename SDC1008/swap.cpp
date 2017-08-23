/*
	swap.cpp
Escribir un programa que lea dos variables enteras separadas por comas e intercambie su valor. Su programa deberá imprimir ambas variables en el mismo orden que fueron leídas para mostrar el resultado.
*/

# include <cstdio>

int main()
{
	int x, y, swap;
		
		printf("Ingrese 2 numeros:\n");
			scanf("%i,%i", &x, &y);
			
			swap = x;
			x = y;
			y = swap;
			
				printf("x: %i\ny: %i\n", x, y); 

   return 0;
}
