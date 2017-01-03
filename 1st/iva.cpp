/*
	iva 
	Escribir un programa que permita leer el precio de un producto y que calcule el iva correspondiente (15%)
	Hacer que el progtama imprima: El monto de iva
	2) el precio final del producto

*/ 

# include <stdio.h>

int main()
{
 
	float precio, preciof, monto;
	
	printf("Escriba el precio del producto para calular el iva (15)\n");
	scanf("%f", &precio);
		
		preciof = precio * 0.15;
		monto = precio + preciof;
		
		 printf("El iva es: %.2f\n", preciof);
		 printf("El precio final es: %.2f\n", monto);
		
return 0;
}
