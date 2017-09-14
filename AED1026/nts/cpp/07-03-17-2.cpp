/*
	linear data structures

	una estrucutra linear es una secuencia finita

		(lambda A) = a1 a2 a3 ... an

		1) el elementos a1 es llamado el primer elemento de la secuencia
		2) el elemento an es llamado el ultimo elemento de la secuencia
		3) cada ai tiene el sucesor ai + 1, 1 < i <= n. solo a1 no tiene 
		   predecesor
		4) el tamaño de lambda esta definido como |lambda| = n

	-
	estrucuras lineales y arreglos
					

				a1 a2 a3 .  
		array: [ ][ ][ ][ ][   ] [   ]
				0  1  2  .  n-2   n-1

	en definicion de lambda se usa el indice natural (por ej. 1, 2, 3, ..., n)
	como sea, en la mayoria de los lenguajes de programacion como c/c++ y java
	usan un indice modular
	
	-
		estructuras dinamicas (listas enlazadas)

	typedef struct snode { // <autoreferencia>
		tdata data; // core
		snode *next; // </autoreferencia>
	} node;
	-
*/


/* simple linked list */
#include <cstdio>
#include <cstdlib>


