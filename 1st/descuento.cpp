/*
    Escribir un programa que permita leer el precio de un producto y un porcentaje de descuento
    Hacer que el programa imprima el precio del producto y despues el descuento
*/

# include <cstdio>

int main()
{
    float precio, descuento;

	printf("Ingrese precio: \n");
	 scanf("%f", &precio);
	printf("Ingrese descuento: \n");
	 scanf("%f", &descuento);
    
 
        	descuento = precio - (precio * (descuento / 100));
        	 printf("Precio: %.2f\nPrecio Final: %.2f\n", precio, descuento);

    return 0;
}
