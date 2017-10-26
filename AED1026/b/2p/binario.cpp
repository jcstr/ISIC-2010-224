#include <cstdio>
#include <iostream>

using namespace std;

struct Pila {
    int dato;
    Pila *sig;
};

void agregarPila(Pila *&, int);
void sacarPila(Pila *&, int &);

int main() 
{
    Pila *cima = NULL;
    int dato, bin, numero; 

	printf("Numero: ");
	cin >> numero;
	
	while (numero >= 1) {
		dato = numero % 2;
		agregarPila(cima, dato);
		numero = numero / 2;
	}		
	
	while (cima != NULL) {
		sacarPila(cima, dato);
		cout << dato; 
	}
	cout << endl;

	return 0;
}

void agregarPila(Pila *&cima, int n)
{
    Pila *nueva_pila = new Pila();
    nueva_pila->dato = n;
    nueva_pila->sig = cima;
    cima = nueva_pila;
}

void sacarPila(Pila *&cima, int &n)
{
    Pila *aux = cima;
    n = aux->dato;
    cima = aux->sig;
    delete aux;
}
