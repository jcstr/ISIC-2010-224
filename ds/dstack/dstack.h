/*
 *	stack.h
 */ 

#ifndef Stack_hpp
#define Stack_hpp

#include <cstdio>

class stack {
//	int *array; /* stack implementation */

class node {
	int _data;
	node *_next;

	public:
		node(int);
		
		node *next();
		node *next(node *);
}
	int capacity;
	int size;

public:
	stack(int); // constructor
	~stack(); // destructor

	void push(int);
	int pop();
	int top();

	int cap() const { return capacity; }
	int siz() const { return size; }

	bool empty() { return size == 0; } 
	bool full() { return size == capacity; }

};

#endif /* Stack_hpp */

