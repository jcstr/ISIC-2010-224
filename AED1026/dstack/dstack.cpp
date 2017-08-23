/*
 *	stack.cpp
 */
/*
#include "stack.h"

stack::stack(int _n): capacity(_n), size(0) {
	array = new int[capacity]; contruct
}

stack::~stack() {
	delete [] array; free memory after use
}

 className::methodName 
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
		return array[size - 1];  return the 'top' value 
	}
	printf("Empty Stack\n\n");
	
	return 0;
}
*/
#include "dstack.h"

stack::node::node(int x) {
	_next = NULL;
	_data = x;
}

int stack::node::data() const { return _data; }

stack::node *stack::node::next() const {
	return _next;
}


stack::node *stack::node::next(stack::node *p) {
	return _next = p;
}

stack::stack(int cap): n(cap), s(0), start(NULL); { }

~stack();

void stack::push(int) {
	if (!full()) {
		if (empty()) {
			start = new node(x);
		} else {
			node *aux = new node(x);
			aux -> nex(start);
			start = aux;
		}
		s++;
	} else printf("Pila llena\n");
}

int stack::pop() {
	
	if (!empty()) {
		node *aux = start;
		int data = aux -> data();

		start = start -> next();
		delete aux;
		s--;

		return data;
	}

	printf("Pila vacia\n");
	return 0;
}

int stack::top() {
	if (!empty() return start -> data();

	printf("Cola vacia\n");
	return 0;
}
