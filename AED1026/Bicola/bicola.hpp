/*
	Bicola.hpp
*/

#ifndef __Bicola
#define __Bicola

#include "nodo.cpp"

class Bicola {
private:
	Nodo *initial;
	Nodo *final;
	int _size;

public:
	Bicola(); // constructor 
	~Bicola(); // destructor

	void push(int);
	int pop();

	void display();

	int size() { return _size;}
	bool empty() { return initial ? true : false;}
};
#endif