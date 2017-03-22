/*
	hpp
*/ 

#ifndef Stack_hpp
#define Stack_hpp

#include <cstdio>

class stack {
	int *array; // implementacion de la pila
	int n; // capacidad
	int s; // tamaño

public:
	stack(int); // constructor
	~stack(); // destructor

	void push(int);
	int pop();
	int top();

	int capacity() const { return n; }
	int size() const { return s; }

	bool empty() { return s == 0; } // cuando la estructura esta vacia
	bool full() { return s == n; }

};

#endif /* Stack_hpp */
