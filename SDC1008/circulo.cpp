/* 
	Circulo
	Escribir un programa que lea el radio de un circulo e imprima su diametro y su area
*/

# include <stdio.h>

int main()
{
	float radio, diametro, area;
	
	 printf("Ingrese radio del circulo:\n");
	 scanf("%f", &radio);
	  
	 diametro = 2 * 3.141592 * radio;
	 area = 3.141592 * (radio * radio);
	 
	 
	 printf("El perimetro del circulo es: %.4f\n", diametro);
	 printf("El area del circulo es: %.4f\n", area);
	 
	return 0;
}
