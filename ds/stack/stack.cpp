/*
 *	stack.cpp
 */

#include "stack.h"

stack::stack(int _n): capacity(_n), size(0) {
	array = new int[capacity]; /* contruct */
}

stack::~stack() {
	delete [] array; /* free memory after use */
}

/* className::methodName */
void stack::push(int data) {
	if (!full()) {
		array[size++] = data;
	} else {
		printf("Full Stack\n\n");
	}
}

int stack::pop() {
	if (!empty()) {
		return array[--size];
	}

	printf("Empty Stack\n\n");
	return 0;
}

int stack::top() {
	if (!empty()) {
		return array[size - 1]; /* return the 'top' value */
	}
	printf("Empty Stack\n\n");
	
	return 0;
}
