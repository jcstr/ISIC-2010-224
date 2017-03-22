/*
	cpp
*/

#include <cstdio>
#include "stackh.cpp"

// tenias un parametro de mas escrito "Size" solo ocupas _n
stack::stack(int _n): n(_n), s(0) {
	array = new int[n]; //constructor
}

stack::~stack() {
	delete [] array; // liberar la memoria despues de usarse
}

// Falto indicar  a que clase pertenecen
// className::methodName
void stack::push(int data) {
	if (!full()) {
		array[s++] = data;
	} else {
		// Punto y coma xD
		printf("Pila llena\n");
	}
}

int stack::pop() {
	if (!empty()) {
		return array[--s];
	}

	printf("Pila vacia\n");
	return 0;
}

int stack::top() {
	if (!empty()) {
		return array[s-1]; // retorna el valor disponible en top
	}

	printf("Pila vacia\n");
	return 0;
}
