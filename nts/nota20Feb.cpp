/*
 * 	++++ RENOMBRAR COMO .cpp
 *	Repaso de punteros
 *	inicializacion por referencia
 *		
 *		int *p = &a - direccion de la variable a
 */

//#include <stdio.h>
#include <cstdio>
#include <cstdlib>

void ejemplo1() // incializacion por referencia
{
	/* referenciacion, indireccion */
	int a = 0; // variable //
	int *p = &a; // puntero // referencia a la misma variable a 

	printf("a: %i\n", a);
	printf("p: %i\n", *p);

	a += 5;

	printf("a: %i\n", a);
	printf("p: %i\n", *p);

	*p += 5;

	printf("a: %i", a);
	printf("p: %i", *p); // direcciona a la variable p
	
	printf("\np: %ul\n", p); // contenido real de la varible p
	printf("\np: %x\n", p); // contenido real de la variable en hexadecimal
}

/* recibimiento de argumentos de la funcion     |	 */
void print(int *lista, int size)
{
	int *p = &lista[0];

	/* forma de acceder a un arreglo */
	for (int i = 0; i < 10; i++) {
		//printf("%4i", lista[i]);
		//printf("%4i", *(p+i)); // indireccion
		//printf("%2i %u: %4i\n", i, p+i, *(p+i)); //
		printf("%2i %u: %4i\n", i, lista+i, *(p+i));
		//printf("", i, lista+i, lista[i]);
	}

	printf("\n\n");
}


void ejemplo2() // aritmetica de punteros
{
	/*el nombre arreglo es un puntero, no existe como tipo de dato nativo del lenguaje*/
	int lista[10] {3,5,8,2,5,3,7,6,2,9}; //calcular la unidad de desplazamiento
	int *p = &lista[0];

	printf("Unidad de desplazamiento de int: %ul\n", sizeof(int));

	/* forma de acceder a un arreglo */
	for (int i = 0; i < 10; i++) {
		//printf("%4i", lista[i]);
		//printf("%4i", *(p+i)); // indireccion
		//printf("%2i %u: %4i\n", i, p+i, *(p+i)); // indireccion
		printf("%2i %u: %4i\n", i, lista+i, *(p+i));
	}
}

/*
	uso de direcciones relativas
*/

/* recibimiento de argumentos de la funcion     |	 */
//void print(int *lista, int size)
//{
	/* forma de acceder a un arreglo */
//	for (int i = 0; i < 10; i++) {
		//printf("%4i", lista[i]);
		//printf("%4i", *(p+i)); // indireccion
		//printf("%2i %u: %4i\n", i, p+i, *(p+i)); //
//		printf("%2i %u: %4i\n", i, lista+i, *(p+i));
//		printf("", i, lista+i, lista[i])
//	}

//	printf("\n\n");
//}

/* utilizar al propio apuntador */
void print_2(int *lista, int size)
{
	/* unidades de desplazamiento */
	for (int i = 0; i < size; i++) {
		printf("%2i %u: %4i\n", i, lista, *lista++);
		/* mover el apuntador directamente */
		//lista++;
	}
}

/* regla de la cadena */ 
////void ejemplo3()
//{
	/* una cadena de caracteres en realidad es un arrgelo de caracteres */
//	char *saludo = "Hola mundo";

	/* se imprime toda la coleccion de caracteres
	 * al final se agrega un caracter nulo */
//	for (char *p = saludo; *p != '\0'/* mientras haya un dato distinto de 0, continua el ciclo */; p++) {
//		printf(p);
//	}	
//	putchar('\n');
//}

/* 
	parametros actuales y formales
	argumentos de referencia
 */

void swap(int *a, int *b) // a, b son alias (referencias)  para las variables x, y // indireccion
{
	int x = *a; // se accede al dato que se tiene en la direccion
	*a = *b;
	*b = x;
}

/*
	indireccion
*/
void ejemplo4()
{
 	int x = 4;
	int y = 7;

	printf("x: %i\ny: %i\n", x, y);

	/* paso de parametros por referencia, a en realidad es x, b en realidad y */
	swap(&x, &y); /* se envia las direcciones, no los datos */

	printf("x: %i\ny: %i\n", x, y);
}

/*
	indireccion de estruturas
*/

/* tipo de dato llamado point*/
typedef struct {
	float x, y;
} point;

float slope(point &a, point &b) {
	return (b.y - a.y) / (b.x - a.x);
}

void ejemplo5() // indireccion de estructuras
{
	/* tipo de dato llamado point */
	//typedef struct {
//		float x, y;
//	} point;

	point *p = new point;
	point *q = new point;

	/* calcula la pendiente */
	/* objetos creados dinamicamente */
	p -> x = 5;
	p -> y = 4;

	q -> x = 3;
	q -> y = -2;

	float m = slope(*p,*q); /** lo que se envia **/

	printf("Slope: %f\n", m);
}

int main(/* int argc, const char * argv[] */)
{
	ejemplo1();
}
