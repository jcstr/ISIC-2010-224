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

dstack::node::node(int x) {
	_next = NULL;
	_data = x;
}

int stack::node::data() const { return _data; }

stack::node *stack::node::next() const {
	return next;
}


stack::node *stack::node::next(stack::node *p) {
	return _next = p;
}

stack::stack(int cap): n(cap), s(0), start(NULL); { }

~stack();

void stack::push(int) {

}

int stack::pop() {

}

int stack::top() {

}



