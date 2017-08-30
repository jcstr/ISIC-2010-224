#include "dqueue.h"

queue::node::node(int x) {
	_next = NULL;
	_data = x;
	eoq = NULL;
}

int stack::node::data() const { return _data; }

queue::node *queue::node::next() const {
	return _next;
}


queue::node *queue::node::next(stack::node *p) {
	return _next = p;
}

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

int queue::top() {
	if (!empty() return start -> data();

	printf("Cola vacia\n");
	return 0;
}

queue::queue(int) {
	
}
queue::~queue() {

}

void queue::enqueue(int x) {
	if (!full()) {
		if (empty()) {
			start = eoq = new node(x);
		} else {
			eoq -> next(new node(x));
			eoq = eoq -> next();
		}
		s++;
	} else printf("Cola llena\n");
}

int queue::dequeue() {
	if(!empty) {
		node *aux = start;
		int data = start -> data();
		start = start -> next();
		delete aux;
	s--;
	return data;
	}
}

int queue::front() {
	if (!empty) {
		return start -> data();

		printf("Cola vacia");
		return 0;
	}

	printf("Cola vacia\n");

	return 0;
}
