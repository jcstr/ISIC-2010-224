/*
		Jesus Castro
	convert.cpp
	Escribir un programa que lea un número de pies, e imprima su equivalente en yardas, pulgadas, centímetros y metros.
*/

# include <cstdio>

int main()
{
	float pies, yardas, pulgadas, centimetros, metros;

		printf("Introduzca medida en pies:\n"); 
		scanf("%f", &pies);

		 yardas = pies / 3;
		  printf("Yardas: %.4f\n", yardas);
		
		 pulgadas = pies * 12;
		  printf("Pulgadas: %.4f\n", pulgadas);
		
		 centimetros = 2.54 * pulgadas;
		  printf("Centimetros: %.4f\n", centimetros); 
		
		 metros = centimetros / 100;
		  printf("Metros: %.4f\n", metros);

   return 0;
}
