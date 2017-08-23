/*
	nodo.hpp
*/

#ifndef __nodo
#define __nodo

class Nodo {
private:
	int _data;
	Nodo *_next;
	Nodo *_front;
	Nodo *_back;

public:
	Nodo(int);
	~Nodo();

	int key();
	void key(int);
	Nodo* next();
	void next(Nodo *);
};

#endif