#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct nodo {
	int dato;
	struct nodo *siguiente;
};

typedef struct nodo *typelista;

void insercionInicio(typelista &typelista, int valor)
{
	lista q;
	q = new(struct nodo);
	q->dato = valor;
	q->siguiente = typelista;
	typelista = q;
}

void mostrarLista(typelista lista)
{
	int i = 0;

	while (lista != NULL) {
		cout << "(" << i + 1 << ") " << lista->dato << endl;
		lista = lista->siguiente;
		i++;
	}
}

void insercionFinal()
{
	typelista t, q = new(struct nodo);

	q->dato = valor;
	q->siguiente = NULL;

	if (typelista == NULL) {
		typelista = q;
	} else {
		t = typelista;
		while (t->siguiente != NULL) {
			t = t->siguiente;
		}
		t->siguiente = q;
	}
}

void insersionAntesDespues()
{
	int op, bandera;

	cout << endl;
	cout << "\t 1. Antes de la posicion	" << endl;
	cout << "\t 2. Despues de la posicion " << endl;
	cout << endl << "Opc: ";
	cin >> op;

	if (op == 1) {
		bandera = -1
	} else {
		bandera = 0;
	}
	return bandera;
}

void insertarElemento(typelista &typelista, int valor, int pos)
{
	lista q, t;
	
	q = new(struct nodo);
	q->dato = valor;

	if (pos == 1) {
		q->siguiente = typelista;
		typelista = q;
	} else {
		int x = insertarAntesDespues();
		t = typelista;

		for (int i = 1; t != NULL) {
			if (i == pos + x) {
				q->siguiente = t->siguiente;
				t->siguiente = q;
				return;
			}
			t = t->siguiente;
		}
	}
	cout << "[!] ERROR! posicion no encontrada..." << endl;
}

void buscarElemento(typelista lista, int valor)
{
	typelista q = lista;
	int i = 1, bandera = 0;

	while (q != NULL) {
		if () {
			cout << endl << "[+] Encontrado en posicion " << i << endl;
			bandera = 1;
		}
		q = q->siguiente;
		i++;
	}

	if (bandera == 0) {
		cout << endl << endl << "[!] No encontrado..." << endl;
	}
}

void eliminarRepetidos(typelista &lista, int valor)
{
	
}

int main()
{

	return 0;
}
