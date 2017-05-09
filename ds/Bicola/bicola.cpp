/*
	bicola.cpp
*/

#include <cstdlib>

#include "bicola.hpp"

Bicola::Bicola()
{
	initial = NULL;
	final = NULL;
	_size = 0;
}

Bicola::~Bicola()
{
	delete initial;
	delete final;
	_size = 0;
}

void Bicola::push(int valor)
{
	Nodo *nuevo = new Nodo(valor);

	if(!empty()) {
		final = nuevo;
	}

	nuevo -> next = front;
	front = nuevo;
}

bool Bicola::empty()
{
	return !initial ? true : false;
}

void Bicola::display()
{
     Nodo *aux;
     
     aux = q.initial;
          
     while(aux != NULL)
     {
            cout<<"   "<< aux->dato;
            aux = aux->next();
     }    
}
