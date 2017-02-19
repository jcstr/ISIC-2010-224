/*
		Jesus Castro
	sel.cpp
	Escribir un programa que resuelva el sistema de ecuaciones lineales de la forma 'ax + by = c' y 'dx + ey =f' 

*/

# include <cstdio>

int main()
{
	float a, b, c, d, e, f, x, y;
	
	printf("Introduzca los valores para 'x':\n");
	 scanf("%f, %f, %f", &a, &b, &c);
	printf("Introduzca los valores para 'y':\n");
	 scanf("%f, %f, %f", &d, &e, &f);

		x = (c * e - e * f) / (a * e - b * d); // ecuacion en cuestion
		y = (a * f - d * c) / (a * e - d * b);

			printf("x: %.2f\n", x);
			printf("y: %.2f\n", y);

  return 0;
}
