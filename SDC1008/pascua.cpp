/*
		Jesus Castro
	pascua.cpp
	Escriba un programa que determine e imprima esta fecha para algún año que se proporcione.
*/

# include <cstdio>

int main()
{
	int a, b, c, d, e, x, n;
	const char *mes = "Marzo";
		
		printf("Ingrese annio:\n");
		scanf("%i", &x);
	
			a = x % 19;
			b = x % 4;
			c = x % 7;
			d = (19 * a + 24) % 30;
			e = (2 * b + 4 * c + 6 * d + 5) % 7;
			n = 22 + d + e;

				if (n > 31) mes = "Abril";
				n = n > 31 ? n-31 : n;

		printf("En %i, el domingo de pascua es el dia %i de %s\n", x, n, mes);

   return 0;
}
