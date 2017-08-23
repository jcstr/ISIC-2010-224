/*
	nodo.cpp
*/

#include <cstdlib>

#include "nodo.hpp"

Nodo::Nodo(int data)
{
	_data = data;
	_next = NULL;
	_front = NULL;
	_back = NULL;
}

Nodo::~Nodo()
{
	delete _next;
	delete _front;
	delete _back;
}

int Nodo::key()
{
	return _data;
}

void Nodo::key(int data)
{
	_data = data;
}

Nodo* Nodo::next()
{
	return _next;
}

void Nodo::next(Nodo *next)
{
	_next = next;
}