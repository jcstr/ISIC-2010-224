/*
	Promedio
	Escribir un programa que lea las edades de cinco personas en variables diferente e imprima su edad promedio
*/

# include <stdio.h>

int main()
{
	float edad[5];
	float promedio;
	
	printf("Escriba las (5) edades:\n");
	scanf("%f%f%f%f%f", &edad[0],&edad[1],&edad[2],&edad[3],&edad[4]);
	
	promedio = (edad[0] + edad[1] + edad[2] + edad[3] + edad[4]) / 5;
	
	printf("El promedio es: %.1f\n", promedio);
	
	return 0;
	
}
