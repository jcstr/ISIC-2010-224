/*
	cpp
*/

#include "stack.hpp"
#include <cstdio>

stack::stack(int size _n): n(_n), s(0) {
	array = new int[n]; //constructor
}

stack::~stack() {
	delete [] array; // liberar la memoria despues de usarse
}

void push(int data) {
	if (!full()) {
		array[s++] = data;
	} else {
		prinf("Pila llena\n") 
	}
}

int pop() {
	if (!empty()) {
		return array[--s];
	}

	printf("Pila vacia\n");
	return 0;
}

int top() {
	if (!empty()) {
		return array[s-1]; // retorna el valor disponible en top
	}

	printf("Pila vacia\n");
	return 0;
}
